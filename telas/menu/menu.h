#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <cstdlib>
#include <set>
#include "../../crud/empresa-crud.h"
#include "../../crud/funcionario-crud.h"
#include "../../colors.h"

using namespace std;
int escolherOpcao();
void iniciarMenu();
void mensagemSucesso(string mensagem);

#endif
