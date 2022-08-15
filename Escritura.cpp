#include "Escritura.h"
#include "Imovel.h"
#include "Comprador.h"
#include "Financiamento.h"

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Escritura::Escritura(string _endereco, int _areaConstruida, int _qntQuartos, int _qntBanheiros, int _qntVagas, double _valorMetro, string nome, string rg, string cpf, string banco, double valorEntrada, int qantMeses, double taxa, int contador) : Imovel(_endereco,_areaConstruida, _qntQuartos, _qntBanheiros, _qntVagas, _valorMetro), Comprador(nome, rg, cpf), Financiamento(banco, valorEntrada, qantMeses, taxa) {
	this->contadorDeImoveis = 0;
}


void Escritura::conteudoEscritura() {
	this->escritura << "----------------------------ESCRITURA DE COMPRA E VENDAL----------------------------" << endl;
	this->escritura << "VENDEDOR : " << endl;
	this->escritura << "COMPRADORA: " << endl;
	this->escritura << "IMÓVEL:" << endl;
	this->escritura << "VALOR DA VENDA E COMPRA : R$" << endl;
	this->escritura << "VALOR VENAL DE REFERÊNCIA : R$" << endl;
	this->escritura << "INSCRIÇÃO CADASTRAL : " << endl;

}

void Escritura::mostrarEscritura() {
	this->escritura.open("Escritura.txt", ios::out);
}


