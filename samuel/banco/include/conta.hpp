#ifndef CONTA_HPP
#define CONTA_HPP

#include "agencia.hpp"
#include "cliente.hpp"

class Conta
{
    public:
        Agencia agencia;
        Cliente cliente;
        int numero;
        double saldo;
        static int quantidadeContas;

    Conta(Cliente cliente, double saldo);
    Conta();
    ~Conta();

    void sacar(double valor);
    void depositar(double valor);
    void transferir(double valor, Conta &conta);
};

#endif // !CONTA_HPP
