#ifndef DATAUTIL_H
#define DATAUTIL_H


#include <ctime>
#include <iostream>
#include <sstream>
#include <iomanip>
#include "stringUtil.h"
#include "../modelos/data/data.h"
using namespace std;


string dateToString(Data data);
Data stringToData(string dataString);
bool checarFormatoData(string dataString);
bool checarDataValida(Data data);
double diferencaDatas(Data data, tm* dataAtual);
tm* getTimeNow();
#endif
   