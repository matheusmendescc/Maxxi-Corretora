#ifndef ESCRITURA_H
#define ESCRITURA_H
#include "Imovel.h"
#include "Comprador.h"
#include "Financiamento.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Escritura{
public:
	int contadorDeImoveis;
	//construtor
	Escritura();
	//métodos
	ofstream escritura;
	void conteudoEscritura(Comprador novoComprador, Imovel novoImovel, Financiamento novoFinanciamento);
	void criarEscritura();

};
#endif
