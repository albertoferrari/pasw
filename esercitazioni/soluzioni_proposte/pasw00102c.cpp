/*
* (pasw00102a.cpp)
* input 8 caratteri (‘0’ o ‘1’) rappresentazione binaria
* di un numero intero senza segno
* output rappresentazione decimale ed esadecimale
* author: AF
* version: 1.0
*/
#include <iostream>

using namespace std;
int main() {
    char cifra;         // cifra binaria in input
    int valDec = 0;     // valore decimale
    int pot2[8] = {1,2,4,8,16,32,64,128};
    valDec = 0;
    for(int c=7;c>=0;c--) {
        cout << "Inserire una cifra binaria ";
        cin >> cifra;
        if (cifra == '1') {
            valDec += pot2[c];
        }
    }
    cout << "Valore decimale: " << valDec << endl;
    cout << "valore esadecimale: " << hex << valDec << endl;
}
