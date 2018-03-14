#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream mioFile;					// mioFile 		nome logico
	mioFile.open("pasw03c02.txt");		// pasw03c2.txt nome fisico
	char c;
	if (mioFile.fail()) {
		cout << "errore nella gestione del file" << endl;
		return 1;
	}
	cout << "--- inizio lettura ---" << endl;
	mioFile >> c;						// lettura
	while(!mioFile.eof()) {
		cout << c << endl;
		mioFile >> c;
	}
	cout << "--- fine   lettura ---" << endl;		
	mioFile.close();					// chiusura
	return 0;
}
