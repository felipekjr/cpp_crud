#include "funcionario-crud.h"

Funcionario criarFuncionario() {
    string nome, inputDate, salario;     
    Data dataAdmissao;  
    Funcionario funcionario;
    cout << CYAN<<"--- FUNCIONÁRIO ---"<<RESET<< endl;
    cout << "- nome: ";
    cin >> nome;
    cout << "- salário: ";
    cin >> salario;
    if(isDouble(salario)){
        cout << "- data de admissão (dd/mm/yyyy): ";
        cin >> inputDate;   
        dataAdmissao = stringToData(inputDate);
        if(checarDataValida(dataAdmissao)){           
            funcionario = Funcionario(nome, stod(salario), dataAdmissao);   
            return funcionario;
        } else {
            cout << RED << "Data inválida!" << RESET << endl;
            throw std::exception();    
        }  
    } else {  
        cout << RED << "Salário inválido!" << RESET << endl;
        throw std::exception(); 
    }    
    
}


bool checarExperiencia(Funcionario funcionario){
   return diferencaDatas(funcionario.getDataAdmissao(), getTimeNow()) <= 90 ? true : false;
}
