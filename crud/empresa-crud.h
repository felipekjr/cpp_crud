#ifndef EMPRESA_CRUD_H
#define EMPRESA_CRUD_H

#include <iostream>
#include "../modelos/empresa/empresa.h"
using namespace std;

Empresa criarEmpresa();
Empresa escolherEmpresa(vector<Empresa> empresas);
void adicionarFuncionario(vector<Empresa> &empresa, Funcionario funcionario);
void listarFuncionarios(vector<Empresa> empresas);
void aplicarAumento(vector<Empresa> &empresas);
void listarMediaFuncionarios(vector<Empresa> empresas);

#endif
