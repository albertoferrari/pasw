/*
* (pasw00104.cpp) 
* input sequenza di non più di 100 caratteri 
* palindroma?
* author: AF
* version: 1.0
*/
#include <iostream>

using namespace std;

int main() {
	const int L_MAX = 100;
    char parola[L_MAX];		// caratteri input
    int n = 0;				// numero caratteri ricevuti
	do {
		cout << "inserisci carattere " << n << " (#) per terminare: ";
		cin >> parola[n];
		n++;
	} while (parola[n-1] != '#' && n<L_MAX);
	n--;					// ultimo carattere non significativo
	
	// visualizzazione sequenza inserita
	for(int c=0;c<n;c++)
		cout << parola[c];
	cout << endl;
	
	bool palindroma = true;
	// confronto carattere primo con ultimo ...
	for(int c=0;c<=n/2;c++)
		if (parola[c]!=parola[n-1-c])
			palindroma = false;
	if (!palindroma)
		cout << "non ";
	cout << "palindroma" << endl;	
    
    return 0;
}
