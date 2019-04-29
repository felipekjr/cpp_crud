#include "empresa.h"

Empresa::Empresa(){
    this->nome = "";
    this->cnpj = "";
    this->funcionarios.empty();
};

Empresa::Empresa(string n, string c): nome(n), cnpj(c){
    this->nome = n;
    this->cnpj = c;
    this->funcionarios.empty();
};

Empresa& Empresa::operator =(Empresa const &e){
    this->nome = e.nome;
    this->cnpj = e.cnpj;
    this->funcionarios = e.funcionarios;
    return *this;
}

ostream& operator<< (ostream &o, Empresa const e) {
o << "nome: " << e.nome << " | cnpj : " << e.cnpj << endl;
return o;
}

Empresa::~Empresa(){    
};