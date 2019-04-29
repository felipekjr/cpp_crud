#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>
using namespace std;

class Funcionario{
    private:
        int id;
        string nome;
        double salario;
        string dataAdmissao;
    public:          
        Funcionario(string nome, double salario, string dataAdmissao);       
        ~Funcionario();
        int getId(){
            return this->id;
        };
        void setId(int id){
            this->id = id;
        };
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

        //sobrecarga de operadores:
        Funcionario& operator= (Funcionario const &f);
        friend ostream& operator<< (ostream &o, Funcionario const f);
       
};

#endif
