#include "carro.hpp"

int Carro::quantidadeCarros;

Carro::Carro(string cor)
{
    this->cor = cor;
    this->quantidadeCarros += 1;
}

Carro::Carro()
{
    this->cor = "Branco";
    this->quantidadeCarros += 1;
}

Carro::~Carro()
{
    
}

void Carro::acelerar(int velocidade)
{
    this->velocidade += velocidade;
}

void Carro::frear(int velocidade)
{
    this->velocidade -= velocidade;
}

void Carro::ligarCarro()
{
    motor.partida();
}