#ifndef PUNTO_H
#define PUNTO_H
#include <string>
using namespace std;
class Punto
{
    public:
        Punto();
        Punto(int, int);
         int Getx() { return x; }
        void Setx( int val) { x = val; }
         int Gety() { return y; }
        void Sety( int val) { y = val; }
        string toString();
        int manhattanDistance(Punto);
        double euclideanDistance(Punto);
    private:
         int x;
         int y;
};
#endif // PUNTO_H
