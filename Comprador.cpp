#include "Comprador.h"
#include <iostream>
#include <string>
using namespace std;

Comprador::Comprador(string nome, string rg, string cpf) {
	this->nome = nome;
	this->rg = rg;
	this->cpf = cpf;
}

void Comprador::setNOME(string nome) {
	this->nome = nome;
}

string Comprador::getNOME() {
	return this->nome;
}

void Comprador::setRG(string rg) {
	this->rg = rg;
}

string Comprador::getRG() {
	return this->rg;
}

void Comprador::setCPF(string cpf) {
	this->cpf = cpf;2
}

string Comprador::getCPF() {
	return this->cpf;
}
