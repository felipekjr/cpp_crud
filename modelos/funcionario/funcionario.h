#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>
using namespace std;

class Funcionario{
    private:
        string nome;
        double salario;
        string dataAdmissao;
        string nomeEmpresa;
    public:          
        Funcionario(string nome, double salario, string dataAdmissao);       
        ~Funcionario();
        string getNome(){
            return this->nome;
        };
        void setNome(string nome){
            this->nome = nome;
        };
        double getSalario(){
            return this->salario;
        };
        void setSalario(double salario){
            this->salario = salario;
        };
        string getDataAdmissao(){            
            return this->dataAdmissao;
        };
        void setDataAdmissao(string dataAdmissao){
            this->dataAdmissao = dataAdmissao;
        };
        string getNomeEmpresa(){
            return this->nomeEmpresa;
        }
        void setNomeEmpresa(string nomeEmpresa){
            this->nomeEmpresa = nomeEmpresa;
        }        

        //sobrecarga de operadores:
        Funcionario& operator= (Funcionario const &f);
        friend ostream& operator<< (ostream &o, Funcionario const f);
       
};

#endif
