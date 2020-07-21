#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

using namespace std;

class Cliente
{
private:
    string nome;
    string documento;
    static int quantidadeClientes;

public:
    Cliente();
    ~Cliente();
    
    void setNome(string nome);
    string getNome();
    void setDocumento(string documento);
    string getDocumento();
};

#endif // !CLIENTE_HPP
