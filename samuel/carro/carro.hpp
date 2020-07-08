#ifndef CARRO_HPP
#define CARRO_HPP

#include "motor.hpp"

using namespace std;

class Carro
{
    public:
        string tipo;
        string placa;
        int numeroPortas;
        int velocidade;
        string cor;
        static int quantidadeCarros;
        Motor motor;

        Carro(string cor);
        Carro();
        ~Carro();

        void acelerar(int velocidade);
        void frear(int velocidade);
        void ligarCarro();
};

#endif // !CARRO_HPP
