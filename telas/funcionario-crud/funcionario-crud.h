#ifndef FUNCIONARIO_CRUD_H
#define FUNCIONARIO_CRUD_H

#include <iostream>
#include "../../modelos/funcionario/funcionario.h"
#include "../../utils/colors.h"
#include <time.h>  
#include <stdio.h>
#include <string>
using namespace std;
Funcionario criarFuncionario();
bool checarExperiencia(Funcionario funcionario);
tm stringToTime(string s);
#endif

