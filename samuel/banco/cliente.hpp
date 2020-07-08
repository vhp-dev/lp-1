#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

using namespace std;

class Cliente
{
    public:
        string nomeDoCliente;
        string cpf;
        static int quantidadeClientes;

        Cliente();
        ~Cliente();
};

#endif // !CLIENTE_HPP
