#include <iostream>
using std::cout;
using std::endl;
int main() {
	int a; 			// a is an integer
	int *aPtr; 			// aPtr is a pointer to an integer
	a = 7;
	aPtr = &a; 			// aPtr set to address of a
	cout << "The address of a is " << &a << "\nThe value of aPtr is " << aPtr;
	cout << "\n\nThe value of a is " << a << "\nThe value of *aPtr is " << *aPtr;
	cout << "\n\nShowing that * and & are inverses of "<< "each other.\n&*aPtr = "
		 << &*aPtr << "\n*&aPtr = " << *&aPtr << endl;
	return 0;
}
 
