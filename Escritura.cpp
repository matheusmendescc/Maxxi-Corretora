#include "Escritura.h"
#include "Imovel.h"
#include "Comprador.h"
#include "Financiamento.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Escritura::Escritura(){}


void Escritura::conteudoEscritura(Comprador novoComprador, Imovel novoImovel, Financiamento novoFinanciamento) {
	this->escritura << "----------------------------ESCRITURA DE COMPRA E VENDA DE IMÓVEL----------------------------" << endl;
	this->escritura << "O presente contrato tem por finalidade a comercialização do imóvel descrito a seguir, de propriedade da Maxxi Construtora.\n" << endl;
	this->escritura << "Endereço do imóvel" << novoImovel.getEndereco() << endl;
	this->escritura << "Número de Matrícula no Cartório de Registro de Imóveis : 1342" << endl;
}

void Escritura::criarEscritura() {
	this->escritura.open("Escritura.txt", ios::out);
}


