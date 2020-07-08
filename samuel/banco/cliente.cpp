#include "cliente.hpp"

int Cliente::quantidadeClientes;

Cliente::Cliente()
{
    this->quantidadeClientes += 1;
}

Cliente::~Cliente()
{
    
}