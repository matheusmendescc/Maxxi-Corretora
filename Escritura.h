#ifndef ESCRITURA_H
#define ESCRITURA_H

#include "Imovel.h"
#include "Comprador.h"
#include "Financiamento.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Escritura : public Imovel, Comprador, Financiamento{
public:
	int contadorDeImoveis;
	// construtor
	Escritura(string _endereco, int _areaConstruida, int _qntQuartos, int _qntBanheiros, int _qntVagas, double _valorMetro, string nome, string rg, string cpf,string banco, double valorEntrada, int qantMeses, double taxa, int contadorDeImoveis);
	//métodos
	ofstream escritura;
	void conteudoEscritura();
	void mostrarEscritura();

};
#endif
