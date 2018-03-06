/*
* (pasw00102a.cpp)
* input 8 caratteri (‘0’ o ‘1’) rappresentazione binaria
* di un numero intero senza segno
* output rappresentazione decimale ed esadecimale
* author: AF
* version: 1.0
*/
#include <iostream>
#define N_BIT 8     // numero di bit in input
#define V_P2 128    // valore del bit piu' significativo 2^(N_BIT-1)

using namespace std;

int main() {
    char cifra;         // cifra binaria in input
    int valCifra = V_P2;
    int valDec;         // valore decimale
    valDec = 0;
    for(int c=N_BIT-1;c>=0;c--) {
        cout << "Inserire una cifra binaria ";
        cin >> cifra;
        if (cifra == '1') {
            valDec = valDec + valCifra;
        }
        valCifra /= 2;  // valore del bit successivo
    }
    cout << "Valore decimale: " << valDec << endl;
    cout << "valore esadecimale: " << hex << valDec << endl;
}
