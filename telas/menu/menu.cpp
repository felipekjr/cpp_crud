#include "menu.h"

void iniciarMenu(){
    int option;
    cout << "Bem vindo!" << endl;
    vector<Empresa> empresas;
    vector<Funcionario> funcionarios;
    do{        
        option = escolherOpcao();       
        switch(option){
            case 1: {
                Empresa empresa = criarEmpresa();
                empresas.push_back(empresa);
                break;
            }
                
            case 2: {
                Funcionario funcionario = Funcionario("felipe", 2.0, "sasa");
                funcionarios.push_back(funcionario);
                adicionarFuncionario(empresas, funcionario);
                break;
            }                
            case 3:
                listarFuncionarios(empresas);
                break;
            case 4:
                aplicarAumento(empresas);
                break;
            case 5:
                listarMediaFuncionarios(empresas);
                break;
            default: break;
        }
        cout << empresas[0].getNome() << endl;
    }while(option != 0);
}

int escolherOpcao(){
    set<int> options = {0,1,2,3,4,5,6};
    int op;
    cout << "1 - CRIAR EMPRESA" << endl;
    cout << "2 - ADICIONAR FUNCIONARIO" << endl;
    cout << "3 - LISTAR FUNCIONARIOS" << endl;
    cout << "4 - APLICAR AUMENTO" << endl;
    cout << "5 - LISTAR MEDIA DE FUNCIONARIOS" << endl;
    cout << "0 - SAIR"<<endl;
    cin >> op;
    const bool opValida = options.find(op) != options.end();
    if (opValida){
        return op;
    } else {
        cout << "Opção inválida!" << endl;
        return -1;
    }
}
