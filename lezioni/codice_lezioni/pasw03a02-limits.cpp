#include <limits>
#include <iostream>
using namespace std;
int main() {
	cout << "type \t lowest \t highest \n";
	cout << "int \t" << numeric_limits<int>::lowest() << '\t'
	<< numeric_limits<int>::max() << '\n';
	// cout << "int \t" << INT_MIN << '\t' << INT_MAX << '\n';
	cout << "char\t" << static_cast<int>(numeric_limits<char>::lowest()) << '\t'
	<< static_cast<int>(numeric_limits<char>::max()) << '\n';
	// cout << "char\t" << CHAR_MIN << '\t' << CHAR_MAX << '\n';
	cout << "float\t" << numeric_limits<float>::lowest() << '\t'
	<< numeric_limits<float>::max() << '\n';
	cout << "double\t" << numeric_limits<double>::lowest() << '\t'
	<< numeric_limits<double>::max() << '\n';
	return 0;
}
 
