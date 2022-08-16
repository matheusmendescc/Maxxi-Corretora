#include <string>
#include "Imovel.h"

using namespace std;

// Construtor
Imovel::Imovel(string _endereco, int _areaConstruida, int _qntQuartos, int _qntBanheiros, int _qntVagas, double _valorMetro) {
    this->areaConstruida = _areaConstruida;
    this->qntQuartos = _qntQuartos;
    this->qntBanheiros = _qntBanheiros;
    this->qntVagas = _qntVagas;
    this->valorMetro = _valorMetro;
    this->endereco = _endereco;
}

// Set-Get (Valor m²)
void Imovel::setValorMetro(double _valorMetro) {
    this->valorMetro = _valorMetro;
}

double Imovel::getValorMetro() {
    return this->valorMetro;
}

// Set-Get(Endereco)
void Imovel::setEndereco(string _endereco) {
    this->endereco = _endereco;
}

string Imovel::getEndereco() {
    return this->endereco;
}

void Imovel::valorImovel(double valorDoImovel) {
    this->precoImovel = valorDoImovel;
}

double Imovel::getValorImovel() {
    return this->precoImovel;
}
