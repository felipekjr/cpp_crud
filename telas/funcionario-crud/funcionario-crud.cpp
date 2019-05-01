#include "funcionario-crud.h"

Funcionario criarFuncionario() {
    string nome, inputDate;   
    string dataAdmissao;
    double salario = 0.0;
    cout << CYAN<<"--- FUNCIONÁRIO ---"<<RESET<< endl;
    cout << "- nome: ";
    cin >> nome;
    cout << "- salário: ";
    cin >> salario;
    cout << "- data de admissão (dd-mm-yyyy): ";
    cin >> dataAdmissao;
    Funcionario funcionario = Funcionario(nome, salario, dataAdmissao);   
    return funcionario;
}


bool checarExperiencia(Funcionario funcionario){
   
}
