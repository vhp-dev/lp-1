#include "cliente.hpp"

int Cliente::quantidadeClientes;

Cliente::Cliente()
{
    this->quantidadeClientes += 1;
}

Cliente::~Cliente()
{
}

void Cliente::setNome(string nome)
{
    this->nome = nome;
}

string Cliente::getNome()
{
    return this->nome;
}

void Cliente::setDocumento(string documento)
{
    this->documento = documento;
}
string Cliente::getDocumento()
{
    return this->documento;
}