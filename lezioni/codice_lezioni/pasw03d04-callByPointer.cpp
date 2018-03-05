#include <iostream> 

using namespace std;

void scambiaInd(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int x=7; int y=5;
	cout << "scambio i valori x = " << x << " y = " << y << endl;
	cout << "passaggio per indirizzo : ";
	scambiaInd(&x,&y);
	cout << "x = " << x << " y = " << y << endl;
	return 0;
}
