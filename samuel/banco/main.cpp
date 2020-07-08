#include <iostream>

#include "conta.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Cliente cliente1;

    cliente1.nomeDoCliente = "Vitor Hugo";
    cliente1.cpf = "12345678911";

    Conta conta1(cliente1, 200.50);

    cout << "Nome do cliente: " <<conta1.cliente.nomeDoCliente << endl;
    cout << "CPF:" << conta1.cliente.cpf << endl;
    cout << "Saldo:" << conta1.saldo << endl;

    conta1.sacar(50.25);

    cout << "Saldo apos saque:" << conta1.saldo << endl;

    conta1.depositar(25.50);

    cout << "Saldo apos deposito:" << conta1.saldo << endl;

    Cliente cliente2;

    cliente2.nomeDoCliente = "Artur Jose";
    cliente2.cpf = "00000000000";

    Conta conta2(cliente2, 1000.00);

    cout << "Nome do cliente: " <<conta2.cliente.nomeDoCliente << endl;
    cout << "CPF:" << conta2.cliente.cpf << endl;
    cout << "Saldo:" << conta2.saldo << endl;

    conta1.transferir(100, conta2);

    cout << "Saldo conta1 apos transferencia:" << conta1.saldo << endl;
    cout << "Saldo conta2 apos transferencia:" << conta2.saldo << endl;

    cout << "Quantidade de contas: " << conta1.quantidadeContas << endl;
    cout << "Quantidade de clientes: " << cliente1.quantidadeClientes << endl;

    return 0;
}
