#include <iostream>
#include "MiaData.h"

MiaData::MiaData()
{
    this->anno = 1970;
    this->mese = 1;
    this->giorno = 1;
}

MiaData::MiaData(int anno, int mese, int giorno)
{
    this->anno = anno;
    this->mese = mese;
    this->giorno = giorno;
}

void MiaData::stampa() const
{
    std::cout << "anno = " << anno << " mese = " << mese << " giorno = " << giorno;
}
