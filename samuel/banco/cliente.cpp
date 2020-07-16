#include "cliente.hpp"

int Cliente::quantidadeClientes;

Cliente::Cliente()
{
    this->quantidadeClientes += 1;
}

Cliente::~Cliente()
{
}

void Cliente::setNomeCliente(string nomeCliente)
{
    this->nomeCliente = nomeCliente;
}

string Cliente::getNomeCliente()
{
    return this->nomeCliente;
}

void Cliente::setCPF(string cpf)
{
    this->cpf = cpf;
}
string Cliente::getCPF()
{
    return this->cpf;
}