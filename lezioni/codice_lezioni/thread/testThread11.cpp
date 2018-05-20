/*
 * testThread11.cpp
 */

#include <iostream>			// std::cout
#include <thread>			// std::thread
#include <mutex>			// std::mutex
 
using namespace std;
 
void cerca(int v[], int start, int end, int el, bool &trovato){
	string sout;
	int i=start;
	while (i<end && !trovato) {
		sout = "controllo posizione " + to_string(i) + "\n";
		cout << sout;
		if (v[i]==el) {
			sout = "\n\n\n***trovato: indice " + to_string(i) + "\n";
			cout << sout;
			trovato = true;
		}
		i++;	
	}
}
 
int main()
{
	int v[100];
	for (int i=0;i<100;i++)
		v[i] = i*10;
	int x = 20;
	bool t = false;
	thread t1(cerca,v,0,50,x,ref(t));
	thread t2(cerca,v,50,100,x,ref(t));
	t1.join();
	t2.join();
	return 0;
};
