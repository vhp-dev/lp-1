#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include "empresa.hpp"

#include <string>

using namespace std;

class Funcionario
{
    private:
    string nome;
    Empresa empresa;
    string departamento;
    double salario;
    string dataAdmissao;
    
    public:
    Funcionario();
    void setNome(string nome);
    string getNome();
    void setEmpresa(Empresa empresa);
    Empresa getEmpresa();
    void setDepartamento(string departamento);
    string getDepartamento();
    void setSalario(double salario);
    double getSalario();
    void setData(string data);
    string getData();
    static int quantidadeFuncionarios;
};

#endif // !FUNCIONARIO_HPP