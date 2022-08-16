#include "Imovel.h"
#include "Apartamento.h"
#include <string>
using namespace std;

Apartamento::Apartamento(int _areaConstruida, int _qntQuartos, int _qntBanheiros, int _qntVagas, double _valor, string _endereco, double _fracaoIdeal, int _andar, bool _cobertura) : Imovel( _endereco, _areaConstruida, _qntQuartos,_qntBanheiros, _qntVagas, valorMetro) {
    this->andar = _andar;
    this->cobertura = _cobertura;
}

double Apartamento::valorApartamento() {
    double precoApartamento, precoCobertura = 10;
    if (cobertura == true) {
        precoApartamento = getValorImovel() + precoCobertura;
        return precoApartamento;
    }
    else {
        precoApartamento = getValorImovel();
    }
}
