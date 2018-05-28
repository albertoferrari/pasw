#include <iostream>
using namespace std;

int main( )
{
    int num, den;	// numeratore e denominatore
    double val;		// valore della frazione
    try {
		cout << "numeratore: ";
		cin >> num;
		cout << "denominatore: ";
		cin >> den;
		if (den == 0)
			throw den;
		val = num/static_cast<double>(den);
		cout << "valore della frazione: " << val << endl;		
	}
	catch(int e) 
    {
        cout << "denominatore = " << e << endl;
    }
    cout << "fine programma\n";
    return 0;
} 
