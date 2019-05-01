#include "dataUtil.h"

Date::Date(int dia, int mes, int ano){
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}

Date& Date::operator= (Date const &d){
    this->dia = d.dia;
    this->mes = d.mes;
    this->ano = d.ano;
    return *this;
}


ostream& operator<< (ostream &o, Date const d) {
    o << d.dia << "-" << d.mes << "-" << d.ano;
    return o;
}

 string dateToString(Date data){
        string dateString;
        dateString = to_string(data.getDia()) + "-" + to_string(data.getMes()) + "-" + to_string(data.getAno());
        return dateString;
}

Date stringToDate(string dataString){    
    vector<string> dataSplitted = splitString(dataString, "-");
    Date date = Date(stoi(dataSplitted[0]), stoi(dataSplitted[1]),stoi(dataSplitted[2]));
    return date;
}


bool checarDataValida(Date data){
    time_t t = time(NULL);
	tm* timePtr = localtime(&t);

    if(data.getDia() <= 31 && data.getDia() >= 1){
        if(data.getMes() <= 12 && data.getMes() >= 1){
            if(data.getAno() <= timePtr->tm_year){
                return true;
            }
            return false;
        }
        return false;
    }
    return false;
}

Date::~Date(){};

int main(){
    string s = dateToString(Date(12,12,120));
    cout << s;
}