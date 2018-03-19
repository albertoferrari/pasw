#include <iostream>
#include "Animale.h"
#include "Cane.h"

using namespace std;

int main()
{
    Animale a1;
    a1.Setaltezza(12);
    a1.visualizza();
    Animale a2(5,3);
    a2.visualizza();
    a2 = a1;
    a1.Setpeso(123);
    a2.visualizza();
    a1.visualizza();
    Cane c1;
    c1.visualizza();
    c1.Setaltezza(11);
    c1.visualizza();
    return 0;
}
