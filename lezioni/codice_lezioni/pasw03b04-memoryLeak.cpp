#include <iostream>
#include <new>

using namespace std;

/* funzione chiamata se l'allocazione di memoria di new fallisce*/
void fine_memoria() {
	cout << " *** memoria terminata *** ";
	exit(0);
}

int main() {
	int *v; long n;
	set_new_handler(fine_memoria);
	cout << "verranno allocati n array di n elementi -> n = "; cin >> n;
	for (long i = 0; i < n; i++) {
		v = new int[n];		// allocazione n interi
	}
	delete [] v;
	// deallocazione
	return 0;
}
