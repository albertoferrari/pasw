#include <iostream>
#include "Cerchio.h"
#include "Cilindro.h"

using namespace std;

int main()
{
    Cerchio c1(10,3,2);
    cout << "circonferenza " << c1.circonferenza() << endl;
    cout << "area " << c1.area() << endl;
    Cilindro cil1(5,8,7,2);
    cout << "superficie totale " << cil1.supTotale() << endl;
    return 0;
}
