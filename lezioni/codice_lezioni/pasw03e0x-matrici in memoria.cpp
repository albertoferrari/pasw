#include <iostream>
using namespace std;

int main() {
	int m[5][4];
	int *pm;
	pm = &m[0][0];
	for (int r=0;r<5;r++)
		for (int c=0;c<4;c++)
			m[r][c] = 10*r+c;
	for (int i=0;i<5*4;i++) {
		cout << "indirizzo " << pm << " valore " << *pm << endl;
		pm++; 
	}
}
