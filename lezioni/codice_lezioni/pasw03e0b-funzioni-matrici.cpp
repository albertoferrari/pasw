#include <iostream>
#include <ctime>

using namespace std;

void visualizza(const double a[][4], int rig) {
	cout << "---------------------------" << endl;
	cout << "dimensione array a " << sizeof a << " bytes " << endl;
	for(int r=0;r<rig;r++) {
		for(int c=0;c<4;c++)
			cout << "a[" << r << "]["<< c<<"] = " << a[r][c] << "\t";
		cout << endl;	// fine riga
	}	
}

void dimezza(double a[][4], int rig) {
	for(int r=0;r<rig;r++) 
		for(int c=0;c<4;c++)
			a[r][c] = a[r][c] / 2;
}

double max(double a[][4], int rig){
	double m = a[0][0];
	for(int r=0;r<rig;r++) 
		for(int c=0;c<4;c++)
			if (a[r][c]>m)
				m = a[r][c];
	return m;		
}

int main() {
	srand(std::time(nullptr));
	double m[5][4];
	for(int r=0;r<5;r++)
		for(int c=0;c<4;c++)
			m[r][c] = (rand() % 100 + 1) / 10.0;
	cout << "dimensione array m " << sizeof m << " bytes " << endl;
	visualizza(m,5);	
	dimezza(m,5);
	visualizza(m,5);
	cout << "valore massimo " << max(m,5) << endl;
}
