#include <cmath>
#include "Cerchio.h"
#define M_PI        3.14159265358979323846264338327950288

Cerchio::Cerchio(double r, int vx, int vy): raggio(r), x(vx), y(vy)
{}

double Cerchio::circonferenza()
{
    return 2*M_PI*raggio;
}

double Cerchio::area()
{
    return M_PI*pow(raggio,2);
}
