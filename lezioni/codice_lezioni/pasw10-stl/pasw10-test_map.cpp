#include <iostream>
#include <map>

using namespace std;

int main() {
	map<string, int> m;
	m["Pippo"] = 4; m["Minnie"] = 2;
	m["Topolino"] = 2; m["Zapotec"] = 13;
	m["Eta Beta"] = 9; m["Pluto"] = 7;
	for (map<string, int>::iterator i=m.begin(); i!=m.end(); i++) {
		cout << i->first << " : " << i->second << "; ";
	}
	cout << endl;

	map<string, int> m2 = {
	{"Pippo", 4}, {"Minnie", 2}, {"Topolino", 2},
	{"Zapotec", 13}, {"Eta Beta", 9}, {"Pluto", 7}
	};
	cout << "Size: " << m2.size() << endl;
	m2.erase("Eta Beta");
	cout << "Size: " << m2.size() << endl;

	return 0;
}
