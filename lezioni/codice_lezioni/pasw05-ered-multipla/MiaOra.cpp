#include <iostream>
#include "MiaOra.h"

MiaOra::MiaOra()
{
    this->minuto = 0;
    this->secondo = 0;
}

MiaOra::MiaOra(int minuto, int secondo)
{
    this->minuto = minuto;
    this->secondo = secondo;
}

void MiaOra::stampa() const
{
    std::cout << "minuto = " << minuto << " secondo = " << secondo;
}
