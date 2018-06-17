#ifndef DRONE_H_INCLUDED
#define DRONE_H_INCLUDED
#include "mezzo.h"
#include "posizione.h"

// drone taxi
class Drone: public MezzoDiTrasporto {
public:
    Drone(int cod, Posizione pos): MezzoDiTrasporto(cod, pos){};
    virtual ~Drone() {};
    virtual int tempo(Posizione partenza, Posizione arrivo);
    virtual std::string toString();
    double velocita() {return (150*1000)/(3600);};  // metri al secondo
private:
    static int velMedia;        // velocità media Km/h
    static int tDecollo;        // tempo decollo min
    static int tAtterraggio;    // tempo atterraggio min
};

#endif // DRONE_H_INCLUDED
