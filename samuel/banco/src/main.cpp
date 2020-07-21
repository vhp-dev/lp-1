#include <iostream>

#include "caixa.hpp"
#include "gerente.hpp"
#include "seguranca.hpp"

#include "clientepj.hpp"
#include "clientepf.hpp"

#include "fila.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Fila<ClientePF> filaClientes(2);
    Fila<ClientePJ> filaClientesPJ(2);

    Gerente gerenteAgencia;

    gerenteAgencia.setNome("Mariele");

    cout << gerenteAgencia.getNome() << endl;

    Caixa caixaGuiche1;

    caixaGuiche1.setSalario(1000);

    cout << caixaGuiche1.getSalario() << endl;

    ClientePF cliente1;
    ClientePF cliente2;
    ClientePF cliente3;

    cliente2.setNome("Teste");

    ClientePJ clientepj1;
    ClientePJ clientepj2;
    ClientePJ clientepj3;

    clientepj2.setNome("Teste razao");
    clientepj2.setDocumento("12345678911");

    filaClientes.push(cliente1);
    filaClientes.push(cliente2);
    filaClientes.push(cliente3);

    filaClientesPJ.push(clientepj1);
    filaClientesPJ.push(clientepj2);
    filaClientesPJ.push(clientepj3);

    cout << filaClientesPJ.back().getNome() << endl;

    cout << filaClientesPJ.back().getDocumento() << endl;

    return 0;
}
