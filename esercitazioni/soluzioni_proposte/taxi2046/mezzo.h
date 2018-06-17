#ifndef MEZZO_H_INCLUDED
#define MEZZO_H_INCLUDED
#include "posizione.h"

// generico mezzo di trasporto
class MezzoDiTrasporto {
public:
    MezzoDiTrasporto(int cod, Posizione pos): codice(cod), posizione(pos) {};
    virtual ~MezzoDiTrasporto() {};
    int getCodice() {return codice;};
    Posizione getPosizione() {return posizione;};
    void setPosizione(Posizione pos) {posizione=pos;};
    // tempo impiegato (non definito per generico mezzo)
    virtual int tempo(Posizione partenza, Posizione arrivo) = 0;
    virtual std::string toString() {return "codice " + std::to_string(codice) + " @ " + posizione.toString();};
protected:
    int codice;
    Posizione posizione;
};

#endif // MEZZO_H_INCLUDED
