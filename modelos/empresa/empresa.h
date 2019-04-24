#ifndef EMPRESA_H
#define EMPRESA_H
#include <string>

class Empresa{
    private:
    string nome;
    string cnpj;
    list<Funcionario> funcionarios;

    public:
    Empresa();
    Empresa(string nome, string  cnpj, list<Funcionario> funcionarios)
    inserirFuncionario(Funcionario funcionario){
        this->funcionarios.insert(funcionario)
    }
    getTotalFuncionarios() {return this->funcionarios.size()}
}

Empresa::Empresa(){
    nome = "";
    cnpj = "";
    list<Funcionario> = emptyList();
}
Empresa::Empresa(string nome, string cnpj, list<Funcionario> funcionarios){
    nome = nome;
    cnpj = cnpj;
    funcionarios = funcionarios
}
Empresa::~Empresa(){
}
