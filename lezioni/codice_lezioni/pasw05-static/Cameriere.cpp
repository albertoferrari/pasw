#include<iostream>
#include<string>
#include "Cameriere.h"

using namespace std;

int Cameriere:: clienteDaServire = 0;
int Cameriere:: ultimoServito = 0;
bool Cameriere::servizioAperto = true;

Cameriere::Cameriere(string nomeCameriere) : nome(nomeCameriere)
{/*Intentionally empty*/}

int Cameriere::getClienteDaServire( )
{
    clienteDaServire++;
    return clienteDaServire;
}

bool Cameriere::isAperto( )
{
    return servizioAperto;
}

void Cameriere::serviCliente( )
{

    if (servizioAperto && ultimoServito < clienteDaServire)
    {
        ultimoServito++;
        cout << "il cameriere " << nome
            << " sta servendo il cliente numero " << ultimoServito << endl;
     }

    if (ultimoServito >= clienteDaServire) //Everyone served
        servizioAperto = false;
}
