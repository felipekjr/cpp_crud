#include "menu.h"

void iniciarMenu(){
    int option;
    cout << "Bem vindo!" << endl;
    cin >> option;

    switch(option){
        case 1: criarEmpresa();
            break;
        case 2: adicionarFuncionarios();
            break;
        case 3: listarFuncionarios(); 
            break;
        case 4: aplicarAumento();
            break;        
        case 5: listarMediaFuncionarios();
            break;
        default: break;
    }

}
