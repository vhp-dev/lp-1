#include "conta.hpp"

int Conta::quantidadeContas;

Conta::Conta(Cliente cliente, double saldo) : cliente(cliente), saldo(saldo)
{
    this->quantidadeContas += 1;
}

Conta::Conta()
{
    this->quantidadeContas += 1;
}

Conta::~Conta()
{

}

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