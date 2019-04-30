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
     cout << GREEN << "funcionários de " <<(empresaEscolhida.getNome()) <<RESET<<endl;
    for (auto const& funcionario : empresaEscolhida.getFuncionarios()) {
        cout << funcionario;          
    } 
}

void aplicarAumento(list<Empresa> *empresas){
    double entrada;
    double aumento = 0.0;
    cout <<CYAN <<"--- APLICAR AUMENTO ---"<<RESET<< endl;
    cout << "valor(%): ";
    cin >> entrada;
    aumento = entrada / 100;
    Empresa empresaEscolhida = escolherEmpresa(*empresas);
    list<Funcionario> funcionarios = empresaEscolhida.getFuncionarios();
    for (auto &empresa : *empresas) {        
        if(empresa.getCnpj() == empresaEscolhida.getCnpj()){
            for (auto &funcionario : empresa.getFuncionarios()) {
                funcionario.setSalario(25);       
            }  
        }            
    }    
}

void listarMediaFuncionarios(list<Empresa> empresas){
    list<int> totalFuncionariosPorEmpresa;
    int contador = 0;
    double media = 0.0;
    double somatorio = 0.0;
    for (auto &empresa : empresas) {  
        somatorio += empresa.getTotalFuncionarios();
        contador++;

    }
    media = somatorio / contador;

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
            cin.ignore();
            getline(cin, escolha);
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
    } while(continuar == "S" && !empresaEscolhida.getNome().size());      
    return empresaEscolhida;
}
