#include "empresa.hpp"
#include "funcionario.hpp"

Empresa::Empresa()
{
    
}

Empresa::Empresa(string nome, string cnpj)
{
    setNome(nome);
    setCnpj(cnpj);
}

void Empresa::setNome(string nome)
{
    this->nome = nome;
}
string Empresa::getNome()
{
    return this->nome;
}
void Empresa::setCnpj(string cnpj)
{
    this->cpnj = cnpj;
}
string Empresa::getCnpj()
{
    return this->cpnj;
}