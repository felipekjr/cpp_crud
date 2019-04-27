#ifndef EMPRESA_H
#define EMPRESA_H

#include <string>
#include <list>
#include "../funcionario/funcionario.h"
using namespace std;

class Empresa{
    private:
    int id;
    string nome;
    string cnpj;
    list<Funcionario> funcionarios;

    public:
    //construores & destrutores
    Empresa();
    Empresa(string nome, string cnpj);
    ~Empresa();
    //getters & setters
    int getId(){
        return this->id;
    };
    void setId(int id){
        this->id = id;
    };    
    string getNome() {
        return this->nome;
    };
    void setNome(string nome) {
        this->nome = nome;
    };
    string getCnpj() {
        return this->cnpj;
    };
    void setCnpj(string cnpj){
        this->cnpj = cnpj;
    };
    list<Funcionario> getFuncionarios() {
        return this->funcionarios;
    }; 

    int getTotalFuncionarios() {
        return this->funcionarios.size();
    }

    void inserirFuncionario(Funcionario funcionario){
        this->funcionarios.push_back(funcionario);
    };
    void removerFuncionario(Funcionario funcionario){
        this->funcionarios.remove(funcionario);
    };
};

Empresa::Empresa(){
    this->nome = "";
    this->cnpj = "";
    this->funcionarios.empty();
};

Empresa::Empresa(string nome, string cnpj){
    this->nome = nome;
    this->cnpj = cnpj;   
};

Empresa::~Empresa(){    
};

#endif
