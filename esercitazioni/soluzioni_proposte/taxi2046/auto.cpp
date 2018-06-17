#include "auto.h"
#include "posizione.h"

// velocità media 50Km/h
int Auto::velMedia = 50;

// tempo in secondo per raggiungere prima partenza poi arrivo
int Auto::tempo(Posizione partenza, Posizione arrivo)
{
    double distanza = posizione.distanzaManhattan(partenza) + partenza.distanzaManhattan(arrivo);
    int t = int(distanza / velocita());
    return t;
}

std::string Auto::toString()
{
    return "Auto " + MezzoDiTrasporto::toString();
}
