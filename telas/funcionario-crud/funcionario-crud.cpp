/**
* @file menu.h
* @brief Menu do sistema
* @author Felipe Rodrigues
* @since 23/04/2019
* @date 01/05/2019
*/
#include "funcionario-crud.h"

/**
* @brief Cria um funcionario
* @return Funcionario criado
*/

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

/**
* @brief Checa se um funcionario é inexperiente
* @param Funcionario a ser checado
* @return 1 se inexperiente, 0 se não;
*/
bool checarExperiencia(Funcionario funcionario){
   return diferencaDatas(funcionario.getDataAdmissao(), getTimeNow()) <= 90 ? true : false;
}
