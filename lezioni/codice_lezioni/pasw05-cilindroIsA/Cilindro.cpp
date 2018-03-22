#include "Cilindro.h"

Cilindro::Cilindro(double r, int vx, int vy, double h): Cerchio(r,vx,vy)
{
    altezza = h;
}

double Cilindro::supTotale()
{
    return area()*2+circonferenza()*altezza;
}
