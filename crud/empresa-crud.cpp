#include "empresa-crud.h"

Empresa criarEmpresa(){
    string nome, cnpj;
    cout << "--- CRIAR EMPRESA ---" << endl;
    cout << "- nome: ";
    // TODO: ler espaço em branco
    cin >> nome;
    cout << "- cnpj: ";
    cin >> cnpj;
    Empresa empresa = Empresa(nome, cnpj);
    return empresa;
}

void adicionarFuncionario(list<Empresa> &empresas, Funcionario funcionario){      
    // Empresa empresaEscolhida = escolherEmpresa(empresas);    
    // cout << funcionario;
    // empresaEscolhida.inserirFuncionario(funcionario);        
    //  for (auto const& empresa : empresas) {
    //      if(empresa.getCnpj() == empresaEscolhida.getCnpj()){
    //          cout << empresa;
    //         // empresas.erase(empresa);
    //         // empresas.insert(empresa, empresaEscolhida);            
    //     }
            
    // }
}

void listarFuncionarios(list<Empresa> empresas){
    Empresa empresaEscolhida = escolherEmpresa(empresas);
    for(int i=0; i<empresaEscolhida.getTotalFuncionarios(); i++){
        cout << "print funcionarios";
    }
}

void aplicarAumento(list<Empresa> &empresas){
    double aumento = 0.0;
    cout << "AUMENTO: " << endl;
    cin >> aumento;
    Empresa empresaEscolhida = escolherEmpresa(empresas);
    list<Funcionario> funcionarios = empresaEscolhida.getFuncionarios();
    for (list<Funcionario>::iterator it = funcionarios.begin(); it!=funcionarios.end(); ++it){
        it->setSalario(it->getSalario() * aumento);        
    }
}

void listarMediaFuncionarios(list<Empresa> empresas){

}

Empresa escolherEmpresa(list<Empresa> empresas){
    string continuar;
    Empresa empresaEscolhida;
    string nome;
    do {
        cout << "--- SELECIONE A EMPRESA ---" << endl;        
        for (auto const& empresa : empresas) {
            cout << empresa;
        }
        cout << "empresa: ";
        cin >> nome;
        for (auto const& empresa : empresas) {
            if(empresa.getNome() == nome){
                empresaEscolhida = empresa
            }            
        }               
        if(!empresaEscolhida.getNome().size()){
            cout << "Empresa inválida! Deseja continuar? (S/N)" << endl;           
            cin >> continuar;
        }        
    }while(continuar == "S" && !empresaEscolhida.getNome().size());      
    return empresaEscolhida;
}
