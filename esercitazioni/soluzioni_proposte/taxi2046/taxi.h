#ifndef TAXI_H_INCLUDED
#define TAXI_H_INCLUDED

#include <vector>
#include "mezzo.h"
#include "posizione.h"

// servizio centralizzato Taxi
class ServizioTaxi {
public:
    ServizioTaxi() {};
    virtual ~ServizioTaxi() {};
    void addTaxi(MezzoDiTrasporto* m, int comp);
    int fornisciTaxi(Posizione partenza, Posizione destinazione);               // return codice taxi
    void piuRapido(Posizione p, Posizione d, int c, int &tempo, int &codice);   // codice texi e tempo
    std::string toString();
    static const int nCompagnie = 2;
private:
    std::vector<MezzoDiTrasporto*> compagnia[nCompagnie];      // due compagnie di servizio taxi
};

#endif // TAXI_H_INCLUDED
