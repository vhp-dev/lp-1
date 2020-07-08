#include <iostream>
#include "carro.hpp"

int main(int argc, char *argv[])
{
    Carro carro;

    carro.tipo = "Sedan";
    carro.numeroPortas = 4;
    carro.placa = "XYZ-0102";

    cout << "Tipo do carro: " << carro.tipo << endl;
    cout << "Quantidade de portas: " << carro.numeroPortas << endl;
    cout << "Placa do carro: " << carro.placa << endl;
    cout << "A cor do carro é: " << carro.cor << endl;
    carro.ligarCarro();
    carro.acelerar(50);
    cout << "A velocidade atual é: " << carro.velocidade << "KM/H" << endl;
    carro.frear (20);
    cout << "A velocidade atual é: " << carro.velocidade << "KM/H" << endl;

    std::cout << carro.quantidadeCarros << std::endl;

    return 0;
}
