#include "dataUtil.h"

string dateToString(Data data){
        string dateString;
        dateString = to_string(data.getDia()) + "-" + to_string(data.getMes()) + "-" + to_string(data.getAno());
        return dateString;
}

Data stringToData(string dataString){    
    vector<string> dataSplitted = splitString(dataString, "-");
    Data data = Data(stoi(dataSplitted[0]), stoi(dataSplitted[1]),stoi(dataSplitted[2]));
    return data;
}


bool checarDataValida(Data data){
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