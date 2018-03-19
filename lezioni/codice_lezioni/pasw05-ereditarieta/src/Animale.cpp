#include "Animale.h"
#include <iostream>

using namespace std;

Animale::Animale(int a, int p): altezza(a), peso(p) {}

void Animale::visualizza() const {
    cout << "altezza " << altezza << " peso " << peso << endl;
}
