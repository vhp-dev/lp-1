#include <string>
#include <iostream>

using namespace std;

class Conta
{
    public:
        int numero;
        string titular;
        double saldo;

    void sacar(double valor);
    void depositar(double valor);
    void transferir(double valor, Conta &conta);
};