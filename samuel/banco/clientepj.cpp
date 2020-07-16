#include "clientepj.hpp"

int ClientePJ::quantidadeClientesPJ;

ClientePJ::ClientePJ()
{
    this->quantidadeClientesPJ += 1;
}

ClientePJ::~ClientePJ()
{
}

void ClientePJ::setRazaoSocial(string razaoSocial)
{
    this->razaoSocial = razaoSocial;
}

string ClientePJ::getRazaoSocial()
{
    return this->razaoSocial;
}

void ClientePJ::setCNPJ(string cnpj)
{
    this->cnpj = cnpj;
}
string ClientePJ::getCNPJ()
{
    return this->cnpj;
}