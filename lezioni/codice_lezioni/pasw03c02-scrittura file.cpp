#include <iostream>
#include <fstream>

int main() {
	std::ofstream mioFile;				// mioFile 		nome logico
	mioFile.open("pasw03c02.txt");		// pasw03c2.txt nome fisico
	mioFile << "first line" << std::endl;	// scrittura
	mioFile << "second line" << std::endl;	// scrittura
	mioFile.close();					// chiusura
	return 0;
}
