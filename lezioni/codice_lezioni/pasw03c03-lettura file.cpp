#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream mioFile;					// mioFile 		nome logico
	mioFile.open("pasw03c02.txt");		// pasw03c2.txt nome fisico
	string s;
	if (mioFile.fail()) {
		cout << "errore nella gestione del file" << endl;
		return 1;
	}
	cout << "--- inizio lettura ---" << endl;
	mioFile >> s;						// lettura
	while(!mioFile.eof()) {
		cout << s << endl;
		mioFile >> s;
	}
	cout << "--- fine   lettura ---" << endl;		
	mioFile.close();					// chiusura
	return 0;
}
