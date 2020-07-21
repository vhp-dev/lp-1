#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <string>

using namespace std;

class Funcionario
{
    private:
        string nome;
        string dataAdmissao;
        double salario;

    public:
        Funcionario();
        
        void setNome(string nome);
        string getNome();
        void setDataAdmissao(string dataAdmissao);
        string getDataAdmissao();
        void setSalario(double salario);
        double getSalario();
};

#endif // !FUNCIONARIO_HPP
