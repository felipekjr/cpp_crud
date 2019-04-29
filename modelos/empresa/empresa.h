#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
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
    Empresa(std::string nome, string cnpj);
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
    void setNome(std::string nome) {
        this->nome = nome;
    };
    string getCnpj() {
        return this->cnpj;
    };
    void setCnpj(std::string cnpj){
        this->cnpj = cnpj;
    };
    list<Funcionario> getFuncionarios() {
        return this->funcionarios;
    }; 

    int getTotalFuncionarios() {
        return this->funcionarios.size();
    }

    void inserirFuncionario(Funcionario funcionario){
        // this->funcionarios.push_back(funcionario);
    };
    void removerFuncionario(Funcionario funcionario){
        // this->funcionarios.remove(funcionario);
    };
};


#endif
