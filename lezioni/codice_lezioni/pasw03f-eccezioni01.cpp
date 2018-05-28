#include <iostream>
using namespace std;

int main( )
{
    int num, den;	// numeratore e denominatore
    double val;		// valore della frazione
    cout << "numeratore: ";
    cin >> num;
    cout << "denominatore: ";
    cin >> den;
    if (den == 0)
    {
        cout << "denominatore = 0" << endl;
    }
    else
    {
        val = num/static_cast<double>(den);
        cout << "valore della frazione: " << val << endl;
    }
    cout << "fine programma\n";
    return 0;
} 
