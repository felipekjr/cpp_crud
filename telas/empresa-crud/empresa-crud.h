#ifndef EMPRESA_CRUD_H
#define EMPRESA_CRUD_H

#include <iostream>
#include <cctype>
#include "../../modelos/empresa/empresa.h"
#include "../../utils/colors.h"
using namespace std;

Empresa criarEmpresa();
Empresa escolherEmpresa(list<Empresa> empresas);
void adicionarFuncionario(list<Empresa> *empresa, Funcionario *funcionario);
void listarFuncionarios(list<Empresa> empresas);
void aplicarAumento(list<Empresa> *empresas);
void listarMediaFuncionarios(list<Empresa> empresas);
void listarFuncionariosExperiencia(list<Empresa> empresas);
#endif