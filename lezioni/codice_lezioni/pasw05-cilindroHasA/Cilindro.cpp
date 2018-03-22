#include "Cilindro.h"

Cilindro::Cilindro(Cerchio c, double h): base(c), altezza(h)
{}

double Cilindro::supTotale()
{
    return base.area()*2+base.circonferenza()*altezza;
}
