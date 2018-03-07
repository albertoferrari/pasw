#include <iostream>

using namespace std;

int main() {
	typedef bool logico;		// logico alias di bool
	logico vl;
	vl = true;					// vl in realtà è una variabile bool
	if (vl)
		cout << "vero" << endl;    
		
	using intero = int;			// intero alias di int
    intero n,k;					// intero e int sono equivalenti
    int b;
    n = 3;						// assegnamento a intero di costante int
    b = n + 2;					// assegnamento a int di espressione intero , int
	k = b;						// assegnamento a intero di variabile int
	cout << "n= " << n << " b= " << b << " k= " << k << endl;

    return 0;
}
