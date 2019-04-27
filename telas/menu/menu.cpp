#include "menu.h"

void iniciarMenu(){
    int option;
    cout << "Bem vindo!" << endl;
    list<Empresa> empresas;
    list<Funcionario> funcionarios;
    do{        
        option = escolherOpcao();       
        switch(option){
            case 1:
                Empresa empresa = criarEmpresa();
                empresas.insert(empresa).
                break;
            case 2:
                Funcionario funcionario = criarFuncionario();
                funcionarios.insert(funcionario);
                adicionarFuncionario(&empresas, funcionario);
                break;
            case 3:
                listarFuncionarios(empresas);
                break;
            case 4:
                aplicarAumento(&empresas);
                break;
            case 5:
                listarMediaFuncionarios(empresas);
                break;
            default: break;
        }
    }while(option != 0);
}

int escolherOpcao(){
    set<int> options = {0,1,2,3,4,5,6}
    int op;
    cout << "1 - CRIAR EMPRESA \n
    2 - ADICIONAR FUNCIONARIO \n
    3 - LISTAR FUNCIONARIOS \n
    4 - APLICAR AUMENTO \n
    5 - LISTAR MEDIA DE FUNCIONARIOS \n
    0 - SAIR" << endl;
    cin >> op;
    const bool opValida = options.find(op) != options.end();
    if (opValida){
        return op;
    } else {
        cout << "Opção inválida!" << endl;
        return -1;
    }
}
