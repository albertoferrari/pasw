#include <iostream>
using namespace std;
int main() {
	int integer1, integer2, sum;
	cout << "Enter first integer\n";
	cin >> integer1;
	cout << "Enter second integer\n";
	cin >> integer2;
	sum = integer1 + integer2;
	cout << "Sum is " << sum << std::endl;
	return 0; // indicate that program ended
}
