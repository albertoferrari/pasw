#include <iostream>
using namespace std;
int main() {
	int v[10];
	int *pv;
	for (int i=0; i<10; i++)
		v[i] = i*10;
	pv = v;
	for (int i=0;i<10;i++) {
		cout << "indirizzo= " << pv << " valore= " << *pv << endl;
		pv = pv +1;
	}	
	return 0;
}
