#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario {
    private:
        string nome;
        double salario;
        date dataAdmissao;
    public:
        Funcionario();
        Funcionario(string nome, double salario, date dataAdmissao);
        getNome(){return this->nome;};
        setNome(string nome){this->nome = nome};
}

Funcionario::Funcionario(){
    nome = "";
    salario = 0.0;
    dataAdmissao = ""
}

Funcionario:: Funcionario(string nome, double salario, date dataAdmissao){
    nome = nome;
    salario = salario;
    dataAdmissao = dataAdmissao
}
Funcionario::~Funcionario(){
}

#endif