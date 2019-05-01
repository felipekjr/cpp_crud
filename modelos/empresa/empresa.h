/**
* @file empresa.h
* @brief Domínio de Empresa
* @author Felipe Rodrigues
* @since 23/04/2019
* @date 01/05/2019
*/
#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include "../funcionario/funcionario.h"
using namespace std;
class Empresa{
    private:

    string nome;
    string cnpj;
    list<Funcionario> funcionarios;

    public:
    //construores & destrutores
    Empresa();
    Empresa(string nome, string cnpj);    
    ~Empresa();
    //getters & setters
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

    void setFuncionarios(list<Funcionario> funcionarios){
        this->funcionarios = funcionarios;
    }

    void inserirFuncionario(Funcionario funcionario){
        this->funcionarios.push_back(funcionario);
    };
    // void removerFuncionario(Funcionario funcionario){
    //     this->funcionarios.remove(funcionario);
    // };

    //sobrecarga de operadores:
    Empresa& operator= (Empresa const &e);
    friend ostream& operator<< (ostream &o, Empresa const e);    

    
};


#endif
