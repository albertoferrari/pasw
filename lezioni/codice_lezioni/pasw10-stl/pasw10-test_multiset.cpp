#include <iostream>
#include <set>

using namespace std;

int main() {
	multiset<int> tree;
	tree.insert(75); tree.insert(10);
	tree.insert(5); tree.insert(10);
	cout << "75 is present " << tree.count(75) << " times\n";
	cout << "10 is present " << tree.count(10) << " times\n";
	cout << "2 is present " << tree.count(2) << " times\n";

	return 0;
}
