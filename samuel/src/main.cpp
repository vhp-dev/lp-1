#include <iostream>

#include "conta.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Conta c1;
    Conta c2;

    c1.numero = 1;
    c1.saldo = 100.00;
    c1.cliente.nomeDoCliente = "Artur Jose";

    c2.numero = 2;
    c2.saldo = 75.45;
    c2.cliente.nomeDoCliente = "Vitor Hugo";


    cout << c1.numero << endl;
    cout << c1.saldo << endl;
    cout << c1.cliente.nomeDoCliente << endl;

    cout << c2.numero << endl;
    cout << c2.saldo << endl;
    cout << c2.cliente.nomeDoCliente << endl;


    c1.sacar(20.00);
    cout << c1.saldo << endl;

    c1.depositar(100.50);
    cout << c1.saldo << endl;

    c1.transferir(25, c2);
    cout << c1.saldo << endl;
    cout << c2.saldo << endl;

    return 0;
}
