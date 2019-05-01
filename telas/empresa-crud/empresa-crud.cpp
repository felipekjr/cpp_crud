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

void adicionarFuncionario(list<Empresa> *empresas, Funcionario *funcionario){      
    Empresa empresaEscolhida = escolherEmpresa(*empresas); 
    empresaEscolhida.inserirFuncionario(*funcionario);
    for (auto &empresa : *empresas) {        
        if(empresa.getCnpj() == empresaEscolhida.getCnpj()){             
            funcionario->setNomeEmpresa(empresa.getNome());
            empresa.inserirFuncionario(*funcionario);   
        }            
    }
}

void listarFuncionarios(list<Empresa> empresas){   
    Empresa empresaEscolhida = escolherEmpresa(empresas); 
    for (auto empresa : empresas) {          
        if(empresa.getCnpj() == empresaEscolhida.getCnpj()){ 
            if (empresa.getTotalFuncionarios() > 0) {
                cout << GREEN << "--- FUNCIONÁRIOS DE " <<(empresaEscolhida.getNome())<<" ---"<<RESET<<endl; 
                for (auto &funcionario : empresa.getFuncionarios()) {
                    cout << funcionario;                
                }  
            } else {
                cout << YELLOW << "Nenhum funcionário cadastrado!" << RESET << endl;
            }            
        }            
    }  
}

void listarFuncionariosExperiencia(list<Empresa> empresas){
    int countExp = 0;
    Empresa empresaEscolhida = escolherEmpresa(empresas);   
    for (auto empresa : empresas) {          
        if(empresa.getCnpj() == empresaEscolhida.getCnpj()){ 
            if (empresa.getTotalFuncionarios() > 0) {
                cout << GREEN << "funcionários em treinamento de " <<(empresaEscolhida.getNome()) <<RESET<<endl;
                for (auto &funcionario : empresa.getFuncionarios()) {
                    if (checarExperiencia(funcionario)){
                        cout << funcionario;
                        countExp++;
                    }                                   
                }
                if(countExp == 0) {
                     cout << YELLOW << "Nenhum funcionário em periodo de experiência!" << RESET << endl;
                }  
            } else {
                cout << YELLOW << "Nenhum funcionário cadastrado!" << RESET << endl;
            }            
        }            
    }  
}

void listarMediaFuncionarios(list<Empresa> empresas){
    int contador = 0;
    double media = 0.0;
    double somatorio = 0.0;
    cout << CYAN << "--- MÉDIA ---" << RESET << endl;
    for (auto empresa : empresas) {
        cout << GREEN<<empresa.getNome() << " : " << empresa.getTotalFuncionarios() << endl;
        somatorio += empresa.getTotalFuncionarios();
        contador++;
    }
    media = somatorio / contador;
    cout << "=========" << endl;
    cout << "média: " << media << RESET << endl;
}


void aplicarAumento(list<Empresa> *empresas){
    string entrada;
    double coeficiente = 0.0;
    cout <<CYAN<<"--- APLICAR AUMENTO ---"<<RESET<< endl;
    cout << "valor(%): ";
    cin >> entrada;
    if(isDouble(entrada)){
        coeficiente = stod(entrada) / 100;
        Empresa empresaEscolhida = escolherEmpresa(*empresas);
        list<Funcionario> funcionarios = empresaEscolhida.getFuncionarios();
        for (auto &funcionario : funcionarios) {
            double aumento = funcionario.getSalario() * coeficiente;
            funcionario.setSalario(funcionario.getSalario() + aumento);
        }
        //atualiza a lista de funcionarios agora com o aumento
        for (auto &empresa: *empresas){
            if(empresa.getCnpj() == empresaEscolhida.getCnpj()){
                empresa.setFuncionarios(funcionarios);
            }
        }
    } else {
        cout << RED << "Valor inválido!" << RESET << endl;
        throw std::exception();
    }
   
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