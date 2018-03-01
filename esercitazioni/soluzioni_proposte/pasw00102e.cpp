/*
* (pasw00102.cpp)
* input 8 caratteri ("0" o "1") rappresentazione binaria
* di un numero intero senza segno
* output rappresentazione decimale ed esadecimale
* author: AF
* version: 1.0
*/
#include <iostream>
#include <vector>

using namespace std;
int main() {
    char cifra;         // cifra binaria in input
    int valDec = 0;     // valore decimale
    vector<int> pot2 = {1,2,4,8,16,32,64,128};	// c++ 11
    valDec = 0;
    for(int c=7;c>=0;c--) {
        cout << "Inserire una cifra binaria ";
        cin >> cifra;
        if (cifra == '1') {
            valDec += pot2[c];
        }
    }
    cout << "Valore decimale: " << valDec << endl;
    cout << "Valore esadecimale: " << hex << valDec << endl;
}
