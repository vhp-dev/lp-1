#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

using namespace std;

class Cliente
{
private:
    string nomeCliente;
    string cpf;
    static int quantidadeClientes;

public:
    Cliente();
    ~Cliente();
    void setNomeCliente(string nomeCliente);
    string getNomeCliente();
    void setCPF(string cpf);
    string getCPF();
};

#endif // !CLIENTE_HPP
