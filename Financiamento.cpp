#include "Financiamento.h"
#include <iostream>
#include <string>
using namespace std;

Financiamento::Financiamento(string banco, double valorEntrada, int qantMeses, double taxa) {
	this->banco = banco;
	this->valorEntrada = valorEntrada;
	this->qantMeses = qantMeses;
	this->taxa = taxa;
}

void Financiamento::setBANCO(string banco) {
	this->banco = banco;
}

string Financiamento::getBANCO() {
	return this->banco;
}

void Financiamento::setVALORENTRADA(double valorEntrada) {
	this->valorEntrada = valorEntrada;
}

double Financiamento::getVALORENTRADA() {
	return this->valorEntrada;
}

void Financiamento::setQANTMESES(int qantMeses) {
	this->qantMeses = qantMeses;
}

int Financiamento::getQANTMESES() {
	return this->qantMeses;
}

void Financiamento::setTAXA(double taxa) {
	this->taxa = taxa;
}

double Financiamento::getTAXA() {
	return this->taxa;
}
