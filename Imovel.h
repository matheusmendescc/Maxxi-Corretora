#ifndef IMOVEL_H
#define IMOVEL_H
#include <string>
#include <iostream>

using namespace std;

class Imovel {
protected:
    // Atributos de valores adicionais no valor do metro²
    double valorQuarto = 2500;
    double valorBanheiro = 8000;
    double valorVaga = 1255;
    double precoImovel;
    string endereco;

public:
    //Atributos públicos
    int areaConstruida;
    int qntQuartos;
    int qntBanheiros;
    int qntVagas;
    double valorMetro; //valor do m²

    //Construtor
 
    Imovel(string _endereco, int _areaConstruida, int _qntQuartos, int _qntBanheiros, int _qntVagas, double _valorMetro);

    //Metodos
    //(Set-Get (valor do Metro²))
    void setValorMetro(double _valorMetro);
    double getValorMetro();

    //(Set-Get (Endereço))
    void setEndereco(string _endereco);
    string getEndereco();

    // Valor do Imovel
    void valorImovel(double valorDoImovel);
    double getValorImovel();
};

#endif

