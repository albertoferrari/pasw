#include <iostream>
#include "MiaDataOra.h"

MiaDataOra::MiaDataOra(): MiaData(), MiaOra()
{
    this->giornoSett = "domenica";
}

MiaDataOra::MiaDataOra(int anno, int mese, int giorno, int ora, int minuto, std::string giornoSett)
{
    MiaData(anno,mese,giorno);
    MiaOra(ora,minuto);
    this->giornoSett = giornoSett;
}

void MiaDataOra::stampa() const
{
    MiaData::stampa(); std::cout << " ";
    MaiOra::stampa(); std::cout << " ";
    std::cout << "giorno settimana = " << giornoSett;
}
