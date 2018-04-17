#include <iostream>
#include <set>

using namespace std;

void printSet(set<int> s) {
	for (set<int>::iterator 
		 i=s.begin(); i!=s.end(); 
		 i++) {
	  cout << *i << " ";
	}	
	cout << endl;
}

int main() {
	set<int> tree;

	tree.insert(75); tree.insert(25);
	tree.insert(50); tree.insert(10);
	tree.insert(49); tree.insert(99);

	for (set<int>::iterator 
		 i=tree.begin(); i!=tree.end(); 
		 i++) {
	  cout << *i << " ";
	}
	cout << endl;
	if (tree.find(49) != tree.end())
		cout << "49 is in" << endl;

	bool is_2_in = tree.find(2) != tree.end();
	cout << "is 2 in ? " << is_2_in << "\n";

	auto is_50_in = tree.find(50);
	cout << "50 is in ? " << *is_50_in << endl;	
	
	printSet(tree);
	tree.erase(10);
	printSet(tree);
	tree.erase(1000);
	printSet(tree);
	
	return 0;
}
