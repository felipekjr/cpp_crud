#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
using namespace std;

class Funcionario {
    private:
        int id;
        string nome;
        double salario;
        date dataAdmissao;
    public:
        Funcionario();
        Funcionario(string nome, double salario, date dataAdmissao);
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
        date getDataAdmissao(){
            return this->dataAdmissao;
        };      
        void setDataAdmissao(date dataAdmissao){
            this->dataAdmissao = dataAdmissao;
        };
       
}

Funcionario::Funcionario(){
    this->nome = "";
    this->salario = 0.0;
    this->dataAdmissao = "";
};

Funcionario::Funcionario(string nome, double salario, date dataAdmissao){
    this->nome = nome;
    this->salario = salario;
    this->dataAdmissao = dataAdmissao;
};

Funcionario::~Funcionario(){
};

#endif
