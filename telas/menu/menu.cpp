#include "menu.h"

void iniciarMenu(){
    int option;
    cout << "Bem vindo!" << endl;
    cin >> option;

    List<Empresa> empresas;
    List<Funcionario> funcionarios;
    switch(option){
        case 1:
            Empresa empresa = criarEmpresa();
            empresas.insert(empresa).
            break;
        case 2:
            Funcionario funcionario = criarFuncionario();
            funcionarios.insert(funcionario);
            empresas = adicionarFuncionario(empresas, funcionario);
            break;
        case 3:
            listarFuncionarios(empresas);
            break;
        case 4:
            empresas = aplicarAumento(empresas);
            break;        
        case 5:
            listarMediaFuncionarios(empresas);
            break;
        default: break;
    }

}
