#include "funcionario.hpp"

#include <iostream>

int main(int argc, char const *argv[])
{
    vector<Funcionario> funcionarios;
    int quantidadeFuncionarios;
    Empresa empresa("nome da empresa", "cnpj da empresa");

    cout << "Digite a quantidade de funcionários: " << endl;
    cin >> quantidadeFuncionarios;

    for (int i = 0; i < quantidadeFuncionarios; i++)
    {
        Funcionario funcionario;

        funcionario.setNome("funcionario_" + to_string(i+1));
        funcionario.setEmpresa(empresa);
        funcionario.setDepartamento("Vendas");
        funcionario.setSalario(1000);
        funcionario.setData("02/02/2002");

        funcionarios.push_back(funcionario);
    }

    for (int i = 0; i < quantidadeFuncionarios; i++)
    {
        cout << funcionarios[i].getNome() << endl;
        cout << funcionarios[i].getEmpresa().getNome() << endl;
        cout << funcionarios[i].getDepartamento() << endl;
        cout << funcionarios[i].getSalario() << endl;
        cout << funcionarios[i].getData() << endl;
    }

    for (int i = 0; i < quantidadeFuncionarios; i++)
    {
        funcionarios[i].setSalario(funcionarios[i].getSalario() * 1.1);
    }

    for (int i = 0; i < quantidadeFuncionarios; i++)
    {
        cout << funcionarios[i].getNome() << endl;
        cout << funcionarios[i].getEmpresa().getNome() << endl;
        cout << funcionarios[i].getDepartamento() << endl;
        cout << funcionarios[i].getSalario() << endl;
        cout << funcionarios[i].getData() << endl;
    }




    return 0;
}
