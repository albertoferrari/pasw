#include "Punto.h"
#include <string>
#include <cmath>

using namespace std;
Punto::Punto(): x(0), y(0) {}

Punto::Punto(int v_x, int v_y): x(v_x), y(v_y) {}

string Punto::toString()
{
    string s;
    s = "(" + to_string(x) + "," + to_string(y) + ")";
    return s;
}

int Punto::manhattanDistance(Punto p)
{
    return abs(x - p.x) + abs(y - p.y);
}

double Punto::euclideanDistance(Punto p)
{
    return sqrt(pow(x - p.x,2) + pow(y - p.y,2));
}
