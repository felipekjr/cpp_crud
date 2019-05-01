// #include "date.h"

// Date::Date(int dia, int mes, int ano){
//     this->dia = dia;
//     this->mes = mes;
//     this->ano = ano;
// }

// Date& Date::operator= (Date const &d){
//     this->dia = d.dia;
//     this->mes = d.mes;
//     this->ano = d.ano;
//     return *this;
// }


// ostream& operator<< (ostream &o, Date const d) {
//     o << d.dia << "-" << d.mes << "-" << d.ano;
//     return o;
// }

// bool checarData(Date data){
//     time_t t = time(NULL);
// 	tm* timePtr = localtime(&t);

//     if(data.getDia() > 31 || data.getDia() < 1){
//         if(data.getMes() > 12 || data.getMes() < 1){
//             if(data.getAno() > timePtr->tm_year){
//                 return false;
//             }
//             return false;
//         }
//         return false;
//     }
//     return true;
// }

// Date::~Date(){};

