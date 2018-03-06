/*
* (pasw00103.cpp)
* definizione di e come limite della successione (1+1/n)^n
* Visualizzare i valori della successione per n=1, n=2, … n=k.
* La visualizzazione di arresta quando il
* valore calcolato per n=k differisce da quello calcolato
* per n=k-1 di un valore inferiore a 0.001
* author: AF
* version: 1.0
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double valE;    // valore di e calcolato per n
    double valEm1;  // valore di e calcolato per n-1
    double base;
    valE = 1;     // valore calcolato per n = 0;
    int n = 1;
    do {
        valEm1 = valE;      // aggiorno il precedente
        base = 1+(1/static_cast<double>(n));
        valE = pow(base,n);
        cout << "n = " << n << " e = " << valE << endl;
        n++;
    } while ((valE - valEm1) > 0.001);

    return 0;
}
