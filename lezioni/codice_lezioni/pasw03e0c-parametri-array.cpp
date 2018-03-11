#include <iostream>
#include <ctime>

using namespace std;

void visualizza(const double a[], int n) {
	cout << "---------------------------" << endl;
	// cout << "dimensione array a " << sizeof a << " bytes " << endl;
	for(int i=0;i<n;i++)
		cout << "a[" << i << "] = " << a[i] << endl;
}

void dimezza(double a[], int n) {
	for(int i=0;i<n;i++)
		a[i] = a[i] / 2;
}

double max(double a[], int n){
	double m = a[0];
	for(int i=1;i<n;i++)
		if (a[i]>m)
			m = a[i];
	return m;		
}

int main() {
	srand(std::time(nullptr));
	double v[10];
	for(int i=0;i<10;i++)
		v[i] = (rand() % 100 + 1) / 10.0;
	cout << "dimensione array v " << sizeof v << " bytes " << endl;
	visualizza(v,10);	
	dimezza(v,10);
	visualizza(v,10);
	cout << "valore massimo " << max(v,10) << endl;
}
