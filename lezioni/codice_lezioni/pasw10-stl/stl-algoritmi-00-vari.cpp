#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <ctime>

using namespace std;

void fillArray(int v[], int n) {
	for (int i=0; i<n; i++)
		v[i] = rand()%(n*10);
}

void fillVector(vector<int> &v, int n) {
	for (int i=0; i<n; i++)
		v.push_back(rand()%(n*10));
}

void printArray(int v[], int n) {
	for (int i=0; i<n; i++)
		cout << v[i] << " | ";
	cout << endl;
}

void printVector(vector<int> v) {
	for (auto elem : v)
        cout << elem << " | ";
    cout << endl;
}

int main()
{
	srand(std::time(nullptr)); 
	const int DIM = 5;
	int contArray[DIM];
	
	cout << "array" << endl;
	fillArray(contArray,DIM);
	printArray(contArray,DIM);
	cout << "sort(contArray,contArray+DIM);" << endl;
	sort(contArray,contArray+DIM);
	printArray(contArray,DIM);
	
	cout << endl << "vector" << endl;
    vector<int> v;
    fillVector(v,10);
	printVector(v);
	cout << "sort(v.begin(),v.end());" << endl;
	sort(v.begin(),v.end());
	printVector(v);
	
	vector<int>::iterator it;
	int rval;
	rval = rand()%100;
	it = find(v.begin(),v.end(),rval);
	if (it != v.end())
		cout << rval << " found at pos " << it-v.begin() << endl;
	else
		cout << rval << " not found" << endl;
	
	int oldval,newval;
	cout << endl << "old value: "; cin >> oldval;
	cout << "new value: "; cin >> newval;
	replace(v.begin(), v.end(), oldval, newval);
	printVector(v);
	
	
	cout << endl << "copy" << endl;
	vector<int> v2(20,99);
	printVector(v2);
	cout << "copy(v.begin(),v.end(),v2.begin());" << endl;
	copy(v.begin(),v.end(),v2.begin());
	printVector(v2);
	
	cout << endl << "fill" << endl;
	cout << "fill(v.begin(), v.end(), -3);" << endl;
    fill(v.begin(), v.end(), -3);
	printVector(v);

}

