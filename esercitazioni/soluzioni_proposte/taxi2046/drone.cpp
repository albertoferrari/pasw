#include "drone.h"
#include "posizione.h"

int Drone::velMedia = 150;      // velocità media 150Km/h
int Drone::tDecollo = 4;        // tempo decollo 4 min
int Drone::tAtterraggio;        // tempo atterraggio 1 min

// tempo in secondo per raggiungere prima partenza poi arrivo
int Drone::tempo(Posizione partenza, Posizione arrivo)
{
    double distanza = posizione.distanza(partenza) + partenza.distanza(arrivo);
    int t = int(distanza / velocita()) + (tDecollo+tAtterraggio)*2*60; // tempo di percorrenza + 2 partenze e atterraggi
    return t;
}

std::string Drone::toString()
{
    return "Drone " + MezzoDiTrasporto::toString();
}
