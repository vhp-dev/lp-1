#ifndef EMPRESA_HPP
#define EMPRESA_HPP

#include <string>
#include <vector>

using namespace std;

class Empresa
{
    private:
    string nome;
    string cpnj;

    public:
    Empresa();
    Empresa(string nome, string cnpj);
    void setNome(string nome);
    string getNome();
    void setCnpj(string cnpj);
    string getCnpj();
};


#endif // !EMPRESA_HPP
