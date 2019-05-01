#ifndef DATAUTIL_H
#define DATAUTIL_H

#include <iostream>
#include <ctime>
#include "stringUtil.h"
using namespace std;
class Date{
    private:
    int dia;
    int mes;
    int ano;

    public:
    Date();
    Date(int dia, int mes, int ano);
    ~Date();

    int getDia(){
        return this->dia;
    };
    void setDia(int dia){
        this->dia = dia;
    }
    int getMes(){
        return this->mes;
    };
    void setMes(int mes){
        this->mes = mes;
    }
    int getAno(){
        return this->ano;
    };
    void setAno(int ano){
        this->ano = ano;
    }

    string dateToString(Date data);

    bool checarDataValida(Date data);

    //sobrecarga de operadores:
    Date& operator= (Date const &f);
    friend ostream& operator<< (ostream &o, Date const d);
    
};

#endif