#include "empresa-crud.h"

Empresa criarEmpresa(){        
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

void listarFuncionarios(list<Empresa> *empresas){   
    Empresa empresaEscolhida = escolherEmpresa(*empresas);
    cout << GREEN << "funcionários de " <<(empresaEscolhida.getNome()) <<RESET<<endl;
    for (auto empresa : *empresas) {          
        if(empresa.getCnpj() == empresaEscolhida.getCnpj()){ 
            for (auto &funcionario : empresa.getFuncionarios()) {
                cout << funcionario;                
            }  
        }            
    }
    cout << endl;    
}

void aplicarAumento(list<Empresa> *empresas){
    double entrada;
    double aumento = 0.0;    
    Empresa empresaEscolhida = escolherEmpresa(*empresas);
    cout <<CYAN<<"--- APLICAR AUMENTO ---"<<RESET<< endl;
    cout << "valor(%): ";
    cin >> entrada;
    aumento = entrada / 100;
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
    int contador = 0;
    double media = 0.0;
    double somatorio = 0.0;
    for (auto &empresa : empresas) {  
        cout << GREEN<<empresa.getNome() << " : " << empresa.getTotalFuncionarios() << endl;
        somatorio += empresa.getTotalFuncionarios();
        contador++;
    }
    media = somatorio / contador;
    cout << "média: " << media << RESET << endl;
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
