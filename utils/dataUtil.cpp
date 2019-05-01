#include "dataUtil.h"

string dateToString(Data data){
    string dateString;
    dateString = to_string(data.getDia()) + "/" + to_string(data.getMes()) + "/" + to_string(data.getAno());
    return dateString;
}

Data stringToData(string dataString){   
    if (checarFormatoData(dataString)) {
        vector<string> dataSplitted = splitString(dataString, "/");
        Data data = Data(stoi(dataSplitted[0]), stoi(dataSplitted[1]),stoi(dataSplitted[2]));
        return data;
    }else {       
        throw std::exception();
    }
   
}


bool checarFormatoData(string dataString){
    // tm_year = year - 1900 (may be negative)
    // tm_mon  = month - 1
    // tm_mday = day of the month
    
    return true;
}

tm* getTimeNow(){
    time_t t = time(NULL);
	tm* timePtr = localtime(&t);
    return timePtr;
}
bool checarDataValida(Data data){
    if(data.getDia() <= 31 && data.getDia() >= 1){         
        if(data.getMes() <= 12 && data.getMes() >= 1){ 
            if(data.getAno() <= getTimeNow()->tm_year+1900){                
                return true;
            }
            return false;
        }
        return false;
    }
    return false;
}

double diferencaDatas(Data data, tm* dataAtual){
    double anoAtual = dataAtual->tm_year + 1900;
    double valorData = data.getDia() + (data.getMes()* 30) + (data.getAno() * 365);
    double valorDataAtual = dataAtual->tm_mday + (dataAtual->tm_mon* 30) +  (anoAtual* 365);
    // cout << dataAtual->tm_mday <<"-" << dataAtual->tm_mon <<"-"<<anoAtual << endl;
    // cout << data.getDia() <<"-" << data.getMes() <<"-"<<data.getAno() << endl;
    // cout << valorDataAtual<<"-" << valorData << endl;
    // cout <<  valorDataAtual - valorData; 
    return valorDataAtual - valorData;
}
