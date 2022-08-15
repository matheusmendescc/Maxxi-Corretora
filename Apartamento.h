#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.h"
#include <string>

using namespace std;

class Apartamento : public Imovel {
private:
    //Atributos
    double fracaoIdeal;
    int andar;
    bool cobertura;

public:
    //Construtor
    Apartamento(int _areaConstruida, int _qntQuartos, int _qntBanheiros, int _qntVagas, double _valor, string _endereco, double _fracaoIdeal, int _andar, bool _cobertura);

    //Metodos
    double valorApartamento();
};


#endif

