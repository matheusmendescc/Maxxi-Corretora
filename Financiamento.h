#ifndef FINANCIAMENTO_H
#define FINANCIAMENTO_H
#include <string>
#include <iostream>

using namespace std;

class Financiamento{
private:
	//atributos
	string banco;
	double valorEntrada;
	int qantMeses;
	double taxa;


public:
	//construtor
	Financiamento(string banco, double valorEntrada, int qantMeses, double taxa);

	//métodos
	void setBANCO(string banco);
	string getBANCO();
	void setVALORENTRADA(double valorEntrada);
	double getVALORENTRADA();
	void setQANTMESES(int qantMeses);
	int getQANTMESES();
	void setTAXA(double taxa);
	double getTAXA();
	//caso funcional
	void validacao();
};
#endif

