#ifndef CILINDRO_H
#define CILINDRO_H

#include <Cerchio.h>


class Cilindro : public Cerchio
{
    public:
        Cilindro(double =1, int = 0, int =0 , double = 1);
        double getAltezza() { return altezza; }
        void setAltezza(double val) { altezza = val; }
        double supTotale();
    private:
        double altezza;
};

#endif // CILINDRO_H
