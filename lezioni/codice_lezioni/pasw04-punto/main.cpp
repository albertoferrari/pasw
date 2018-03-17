#include <iostream>
#include "Punto.h"

using namespace std;

int main()
{
    Punto p1(3,4), p2(7,7);
    cout << "manhattan distance fra " << p1.toString()
         << " e " << p2.toString() << ": " << p1.manhattanDistance(p2) << endl;
    cout << "euclidean distance fra " << p1.toString()
         << " e " << p2.toString() << ": " << p1.euclideanDistance(p2) << endl;
    return 0;
}
