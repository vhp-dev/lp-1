#include "funcionario.hpp"

int Funcionario::quantidadeFuncionarios = 0;

Funcionario::Funcionario()
{
    
}

void Funcionario::setNome(string nome)
{
    this->nome = nome;
}
string Funcionario::getNome()
{
    return this->nome;
}

void Funcionario::setEmpresa(Empresa empresa)
{
    this->empresa = empresa;
}
Empresa Funcionario::getEmpresa()
{
    return this->empresa;
}

void Funcionario::setDepartamento(string departamento)
{
    this->departamento = departamento;
}
string Funcionario::getDepartamento()
{
    return this->departamento;
}

void Funcionario::setSalario(double salario)
{
    this->salario = salario;
}
double Funcionario::getSalario()
{
    return this->salario;
}

void Funcionario::setData(string data)
{
    this->dataAdmissao = data;
}
string Funcionario::getData()
{
    return this->dataAdmissao;
}