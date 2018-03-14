#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	fstream f1,f2;
	int i; char c; string s; double d; 			
	f1.open("pasw03c06.txt", ios::out);
	f1 << 123 << " " << 'a' << '\t' << "text" << " " << 3.14  << endl;
	f1.close();
	f2.open("pasw03c06.txt", ios::in);
	f2 >> i >> c >> s >> d;
	cout << "i: " << i << endl;
	cout << "c: " << c << endl;
	cout << "s: " << s << endl;
	cout << "d: " << d << endl;			
	f2.close();					
	return 0;
}
