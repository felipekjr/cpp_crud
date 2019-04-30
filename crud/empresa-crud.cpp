#include "empresa-crud.h"

Empresa criarEmpresa(){ 
    cin.clear();
    cin.sync();    
    string nome, cnpj;
    cout <<CYAN<<"--- CRIAR EMPRESA ---"<<RESET<< endl;
    cout << "- nome: ";
    cin.ignore();
    getline(cin, nome);
    cout << "- cnpj: ";
    getline(cin, cnpj);
    Empresa empresa = Empresa(nome, cnpj);
    return empresa;
}

void adicionarFuncionario(list<Empresa> *empresas, Funcionario funcionario){      
    Empresa empresaEscolhida = escolherEmpresa(*empresas); 
    empresaEscolhida.inserirFuncionario(funcionario);
    for (auto &empresa : *empresas) {        
        if(empresa.getCnpj() == empresaEscolhida.getCnpj()){
            empresa.inserirFuncionario(funcionario);    
        }            
    }
}

void listarFuncionarios(list<Empresa> empresas){   
    Empresa empresaEscolhida = escolherEmpresa(empresas);
     cout << CYAN << "FUNCIONÁRIOS DE " << empresaEscolhida.getNome() << endl;
    for (auto const& funcionario : empresaEscolhida.getFuncionarios()) {
        cout << funcionario << endl;          
    } 
}

void aplicarAumento(list<Empresa> &empresas){
    double aumento = 0.0;
    cout <<CYAN <<"--- APLICAR AUMENTO ---"<<RESET<< endl;
    cout << "valor: ";
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
    string escolha;
    do {
        cout << CYAN<< "--- SELECIONE A EMPRESA ---"<<RESET<< endl;     
        if(empresas.size() == 0){
            cout << YELLOW << "Nenhuma empresa cadastrada!" << RESET << endl;
            continuar = "N";
        } else {
            for (auto & empresa : empresas) {
                cout << empresa;
            }
            cout << "empresa: ";
            cin >> escolha;
            for (auto & empresa : empresas) {
                if(empresa.getNome() == escolha || empresa.getCnpj() == escolha){
                    empresaEscolhida = empresa;
                }            
            }               
            if(!empresaEscolhida.getNome().size()){
                cout << "Empresa inválida! Deseja continuar? (S/N)" << endl;           
                cin >> continuar;
            }    
        }            
    }while(continuar == "S" && !empresaEscolhida.getNome().size());      
    return empresaEscolhida;
}
