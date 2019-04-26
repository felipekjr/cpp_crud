#include "empresa-crud.h"

Empresa criarEmpresa(){
    string nome, cnpj;
    cout << "Criar Empresa:\n Nome:" << endl;
    cin >> nome;
    cout << "CNPJ:" << endl;
    cin >> cnpj
    Empresa empresa = Empresa(nome, cnpj);
    return empresa;
}

list<Empresa> adicionarFuncionario(list<Empresa> empresas, Funcionario funcionario){
    list<Empresa> empresasAtualizar;
    int option;
    cout << "SELECIONE A EMPRESA: " << endl;
    // listar empresas id - nome
    cin >> option;
    for (int i = 0; i < empresas.size(); i++){
        if(empresa[i].getId() === option){
            empresa[i].adicionarFuncionario(funcionario);
        }
    }
    return empresas;

}

void listarFuncionarios(list<Empresa> empresas){
        Empresa empresaEscolhida;
        int option;
        cout << "SELECIONE A EMPRESA: " << endl;
        // listar empresas id - nome
        cin >> option;
    for(i=0; i<empresas.size() i++){
        if(empresas[i].getId() === option){
            empresaEscolhida = empresas[i];
        }
    }
    for(j=0; j<empresaEscolhida.getFuncionarios().size(); i++){
        cout << "print funcionarios";
    }
}

void aplicarAumento(){


}

void listarMediaFuncionarios(){

}

private void listarEmpresas(list<Empresa> empresas){
    cout << "SELECIONE A EMPRESA: " << endl;
    // listar empresas id - nome
}
