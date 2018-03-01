/*
 * rapprOttaleEsadecimale.cpp
 * manipolatori base numerica
 */
 
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Inserisci un valore intero in rappresentazione base 10: ";
	cin >> dec >> n;
	cout << dec << "rappresentazione decimale: " << n << " esadecimale: " << hex << n <<endl;
	cout << dec << "rappresentazione decimale: " << n << " ottale     : " << oct << n <<endl;	
	
	cout << "Inserisci un valore intero in rappresentazione base 16: ";
	cin >> hex >> n;
	cout << dec << "rappresentazione decimale: " << n << " esadecimale: " << hex << n <<endl;
	cout << dec << "rappresentazione decimale: " << n << " ottale     : " << oct << n <<endl;
	
	cout << "Inserisci un valore intero in rappresentazione base 8: ";
	cin >> oct >> n;
	cout << dec << "rappresentazione decimale: " << n << " esadecimale: " << hex << n <<endl;
	cout << dec << "rappresentazione decimale: " << n << " ottale     : " << oct << n <<endl;
		
	cout << "Attenzione l'ultima base impostata rimane attiva!" << endl;
	cout << "Inserisci un valore intero : ";
	cin >> oct >> n;
	cout << dec << "rappresentazione decimale: " << n << " esadecimale: " << hex << n <<endl;
	cout << dec << "rappresentazione decimale: " << n << " ottale     : " << oct << n <<endl;
	
	return 0;
}
