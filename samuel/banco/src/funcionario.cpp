#include "funcionario.hpp"

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

void Funcionario::setDataAdmissao(string dataAdmissao)
{
    this->dataAdmissao = dataAdmissao;
}

string Funcionario::getDataAdmissao()
{
    return this->dataAdmissao;
}
void Funcionario::setSalario(double salario)
{
    this->salario = salario;
}
double Funcionario::getSalario()
{
    return this->salario;
}