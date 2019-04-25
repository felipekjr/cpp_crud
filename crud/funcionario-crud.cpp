
Funcionario criarFuncionario() {
    string nome, dataAdmissao;
    double salario = 0.0;
    cout << "--- FUNCIONÁRIO ---" << endl;
    cout << "- nome: ";
    cin >> nome;
    cout << "- salário: ";
    cin >> salario;
    cout << "- data de admissão: ";
    cin >> dataAdmissao;

    Funcionario funcionario = Funcionario(nome, salario, dataAdmissao);
    return funcionario;
}
