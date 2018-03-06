/*
* (pasw00102.cpp)
* input 8 caratteri (‘0’ o ‘1’) rappresentazione binaria
* di un numero intero senza segno
* output rappresentazione decimale ed esadecimale
* author: AF
* version: 1.0
*/
#include <iostream>

using namespace std;

int main() {
    char cifra;     // cifra binaria in input
    int valCifra;
    int valDec;     // valore decimale
    valDec = 0;
    for(int c=7;c>=0;c--) {
        cout << "Inserire una cifra binaria ";
        cin >> cifra;
        if (cifra == '1') {
            // calcolo il valore della cifra inserita (2^c)
            valCifra = 1;
            for(int e=c;e>0;e--)
                valCifra = valCifra * 2;
            valDec = valDec + valCifra;
        }
    }
    cout << "Valore decimale: " << valDec << endl;
    cout << "valore esadecimale: " << hex << valDec << endl;
}
