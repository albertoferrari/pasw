#ifndef AUTO_H_INCLUDED
#define AUTO_H_INCLUDED
#include "mezzo.h"
#include "posizione.h"

// auto taxi
class Auto: public MezzoDiTrasporto {
public:
    Auto(int cod, Posizione pos): MezzoDiTrasporto(cod, pos) {};
    virtual ~Auto() {};
    virtual int tempo(Posizione partenza, Posizione arrivo);
    virtual std::string toString();
    double velocita() {return (velMedia*1000)/(3600);};  // metri al secondo
private:
    static int velMedia;        // velocità media Km/h
};

#endif // AUTO_H_INCLUDED
