#include "posizione.h"
#include <cmath>

// verifica posizinamento interno all'area di lavoro
void Posizione::setX(int pos_x)
{
    if (pos_x>0 && pos_x<3000)
        x = pos_x;
    else
        x = 0;
}

// verifica posizinamento interno all'area di lavoro
void Posizione::setY(int pos_y)
{
    if (pos_y>0 && pos_y<15000)
        y = pos_y;
    else
        y = 0;
}

Posizione::Posizione(int pos_x, int pos_y)
{
    setX(pos_x);
    setY(pos_y);
}

// distanza lineare
double Posizione::distanza(Posizione p)
{
    return abs(x-p.x) + abs(y-p.y);
}

// Manhattan distance
double Posizione::distanzaManhattan(Posizione p)
{
    return sqrt(pow((x-p.x),2)+pow((y-p.y),2));
}

// formato (x;y)
std::string Posizione::toString()
{
    return "(" + std::to_string(x) + ";" + std::to_string(y) + ")";
}
