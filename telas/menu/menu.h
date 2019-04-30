#ifndef MENU_H
#define MENU_H
#include<sstream>
#include <iostream>
#include <cstdlib>
#include <set>
#include "../../crud/empresa-crud.h"
#include "../../crud/funcionario-crud.h"
#include "../../colors.h"

using namespace std;
int escolherOpcao();
bool checarEmpresa(list<Empresa> empresas, Empresa empresa);
bool checarFuncionario(list<Funcionario> funcionarios, Funcionario funcionario);
void iniciarMenu();
void mensagemSucesso(string mensagem);
void mensagemErro(string mensagem);

#endif
