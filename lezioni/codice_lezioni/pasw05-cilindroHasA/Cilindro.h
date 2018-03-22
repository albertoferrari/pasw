#ifndef CILINDRO_H
#define CILINDRO_H

#include "Cerchio.h"


class Cilindro
{
    public:
        Cilindro(Cerchio , double = 1);
        double getAltezza() { return altezza; }
        void setAltezza(double val) { altezza = val; }
        double supTotale();
    private:
        Cerchio base;
        double altezza;
};

#endif // CILINDRO_H
