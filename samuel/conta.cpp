#include "conta.hpp"

void Conta::sacar(double valor)
{
    this->saldo -= valor;
}

void Conta::depositar(double valor)
{
    this->saldo += valor;
}

void Conta::transferir(double valor, Conta &conta)
{
    this->saldo -= valor;
    conta.saldo += valor;
}