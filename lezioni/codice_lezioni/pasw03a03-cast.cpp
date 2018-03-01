#include <iostream>
using namespace std;
int main() {
	cout << "static_cast<int>(4.9) = " << static_cast<int>(4.9) << endl;
	cout << "static_cast<int>(4.2) = " << static_cast<int>(4.2) << endl;
	cout << "static_cast<double>(10) / 3 = " << static_cast<double>(10) / 3 << endl;
	cout << "static_cast<double>(10 / 3) = " << static_cast<double>(10 / 3) << endl;
	cout << "(double)15 / 2 = " << (double)15 / 2 << endl;
	return 0;
}
 
