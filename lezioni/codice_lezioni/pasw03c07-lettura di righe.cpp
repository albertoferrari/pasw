#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream cost{"costituzione.txt"};	// apertura file
	string riga,riga1,riga2,tuttoIlTesto;
	cout << "--- prime due righe (non legge endl) ---" << endl;
	if (cost.good()) {
		getline(cost, riga1);
		getline(cost, riga2);
		cout << riga1 << riga2 << endl;
	}		
	cost.close();	
	cout << "--- tutto il testo (fino a eof) ---" << endl;
	cost.open("costituzione.txt");		// riapertura	
	getline(cost, tuttoIlTesto, '\0');	
	cout << tuttoIlTesto << endl;
	cost.close();
	cout << "--- tutto il testo (riga per riga) ---" << endl;
	cost.open("costituzione.txt");		// riapertura	
	while (getline(cost, riga)) { 
		cout << riga << endl;
	}
	cost.close();		
	return 0;
}

