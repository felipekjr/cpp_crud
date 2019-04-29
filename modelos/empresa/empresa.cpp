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

Empresa::~Empresa(){    
};