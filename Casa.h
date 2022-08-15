#ifndef PROJETO_POO_CASA_H
#define PROJETO_POO_CASA_H
#include "Imovel.h"
#include <string>

using namespace std;

class Casa : public Imovel {
private:
    //Atributos
    int tamTerreno;

public:
    //Construtor
    Casa(int _areaConstruida, int _qntQuartos, int _qntBanheiros, int _qntVagas, double _valor, string _endereco, int _tamTerreno);

    //Metodos
    void verificaTerreno(int _areaConstruida, int _tamTerreno);
    double valorCasa();
};

#endif

