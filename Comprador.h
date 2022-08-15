#ifndef COMPRADOR_H
#define COMPRADOR_H
#include <string>
#include <iostream>

using namespace std;

class Comprador{
private:
	//atributos
	string nome, rg, cpf;

public:
	//construtor
	Comprador(string nome, string rg, string cpf);

	//métodos
	void setNOME(string nome);
	string getNOME();
	void setRG(string rg);
	string getRG();
	void setCPF(string cpf);
	string getCPF();
};
#endif