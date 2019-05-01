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
    // Date dataAdmissao = Date(dia, mes, ano);
    Funcionario funcionario = Funcionario(nome, salario, dataAdmissao);
    cout << funcionario;
    return funcionario;
}
tm stringToTime(string s){
    const char *time_details = s.c_str();
    struct tm tm;
    strptime(time_details, "%H-%M-%S", &tm);   
    cout << mktime(&tm) << "-" << tm.tm_mday; 
    return tm;;
}
bool checarExperiencia(Funcionario funcionario){
   
}
