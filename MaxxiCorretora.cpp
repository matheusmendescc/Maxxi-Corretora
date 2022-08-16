#include <iostream>
#include <string>
#include "Escritura.h"
using namespace std;

int main() {
    //teste Comprador
    Comprador comprador1 = Comprador("Lívia", "23.534.2", "1828496-12");
    //teste Financiamento
    Financiamento financiamento1 = Financiamento("Bradesco", 18.300, 12, 0.6);
    //teste Imovel
    Imovel imovel1 = Imovel("Rua Professor Vicente Lira, Campina Grande - PB, Brasil", 200, 4, 2, 4, 35);
    //teste Escritura
    Escritura escritura1 = Escritura();
    escritura1.criarEscritura();
    escritura1.conteudoEscritura(comprador1, imovel1, financiamento1);
    return 0;
}