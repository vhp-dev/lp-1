#include <iostream>

#include "clientepj.hpp"
#include "cliente.hpp"
#include "fila.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Fila<Cliente> filaClientes(2);
    Fila<ClientePJ> filaClientesPJ(2);

    Cliente cliente1;
    Cliente cliente2;
    Cliente cliente3;

    cliente2.setNomeCliente("Teste");

    ClientePJ clientepj1;
    ClientePJ clientepj2;
    ClientePJ clientepj3;

    clientepj2.setRazaoSocial("Teste razao");

    filaClientes.push(cliente1);
    filaClientes.push(cliente2);
    filaClientes.push(cliente3);

    filaClientesPJ.push(clientepj1);
    filaClientesPJ.push(clientepj2);
    filaClientesPJ.push(clientepj3);

    cout << filaClientes.back().getNomeCliente() << endl;

    cout << filaClientesPJ.back().getRazaoSocial() << endl;

    return 0;
}
