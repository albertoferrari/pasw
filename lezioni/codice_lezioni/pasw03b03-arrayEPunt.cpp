#include <iostream>
using namespace std;
int main() {
	int v[10];
	int *pv;
	pv = v;
	for (int i=0; i<10; i++) {
		*pv = i*10;
		pv++;
	}
	for (int i=0;i<10;i++) {
		cout << "indirizzo (&v[" << i << "])= " << &v[i] << " valore (v[" << i << "])= " << v[i] << endl;
	}	
	cout << "v[3] equivale a 3[v] !?!  v[3] = " << v[3] << " 3[v] = " << 3[v] << endl; 
	return 0;
}
