/*
* (pasw00105.cpp) 
* input sequenza di n (1<n<100 n ricevuto in input) valori interi 
* visualizza i valori non duplicati
* author: AF
* version: 1.0
*/
#include <iostream>

using namespace std;

int main() {
	const int L_MAX = 100;
    int v[L_MAX];
    int n;
    bool duplicato;
    
    // input numero valori
    do {
		cout << "numero valori (0<n<100) : ";
		cin >> n;
	} while (n<=0 || n>=100);
    
    // input valori
    for (int i=0; i<n; i++) {
		cout << "valore " << i << " = ";
		cin >> v[i];
	}
	
    cout << "valori non duplicati" << endl;
    // per ogni valore controllo con tutti gli altri (tranne se stesso)
    for(int i=0;i<n;i++) {
		duplicato = false;
		for (int j=0;j<n;j++)
			if ((i != j) && (v[i]==v[j])) 
				duplicato = true;
		// se non duplicato visualizzo		
		if (!duplicato)
			cout << v[i] << endl;
	}
		
    return 0;
}
