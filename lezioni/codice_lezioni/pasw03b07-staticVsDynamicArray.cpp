/*
 * static vs dynamic array
*/
#include <iostream>
using namespace std;

#define LEN01 10

int main() {	
	
	double stArr01[LEN01];
	cout << "size of stArr01: " << sizeof stArr01 << " bytes " << endl;
	cout << "memory address of stArr01: " << &stArr01 << endl;	
	//cout << "stArr01[0] " << stArr01[0] << endl;		
		
	const int len02 = 10;
	double stArr02[len02];	
	cout << "size of stArr02: " << sizeof stArr02 << " bytes " << endl;
	cout << "memory address of stArr02: " << &stArr02 << endl;	
	//cout << "stArr02[0] " << stArr02[0] << endl;	
		
	int len03 = 10;
	double stArr03[len03];	
	cout << "size of stArr03: " << sizeof stArr03 << " bytes " << endl;
	cout << "memory address of stArr03: " << &stArr03 << endl;	
	//cout << "stArr03[0] " << stArr03[0] << endl;		
	
	/*
	 * if compiler implements a non-standard extension called VLA 
	 * (Variable Length Arrays)
	 */
	int len04;
	cout << "strArr04 lenght: ";
	cin >> len04;
	double stArr04[len04];
	cout << "size of stArr04: " << sizeof stArr04 << " bytes " << endl;
	cout << "memory address of stArr04: " << &stArr04 << endl;	
	//cout << "stArr04[0] " << stArr04[0] << endl;				

	int len05;
	cout << "strArr05 lenght: ";
	cin >> len05;
	double *dyArr05;
	dyArr05 = new double[len05];
	cout << "size of dyArr05: " << sizeof dyArr05 << " bytes " << endl;
	cout << "size of *dyArr05: " << sizeof *dyArr05 << " bytes " << endl;	
	cout << "memory address of dyArr05: " << dyArr05 << endl;	
	//cout << "dyArr05[0] " << dyArr05[0] << endl;	

	return 0;
}
