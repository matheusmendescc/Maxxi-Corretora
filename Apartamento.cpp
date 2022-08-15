#include "Casa.h"
#include "Imovel.h"
#include <string>

using namespace std;

//Construtor
Casa::Casa(std::string _endereco, int _areaConstruida, int _qntQuartos, int _qntBanheiros, int _qntVagas, double _valorMetro, int _tamTerreno) : Imovel(_endereco, _areaConstruida, _qntQuartos, _qntBanheiros, _qntVagas, _valorMetro) {
    this->tamTerreno = _tamTerreno;
}

//Metodos
void Casa::verificaTerreno(int _areaConstruida, int _tamTerreno) {
    if (_tamTerreno < _areaConstruida) {
        cout << "Operação Inválida!" << endl;
    }
}

double Casa::valorCasa() {
    return this->precoCasa = valorImovel() + this->tamTerreno * precoTerreno;
}

// Corrigir valorCasa()
