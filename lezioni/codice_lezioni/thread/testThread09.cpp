/*
 * testThread09.cpp
 */

#include <iostream>			// std::cout
#include <thread>			// std::thread
 
using namespace std;
 
int dato;					// global 
 
void modifica(){
	if (dato>0) {
		std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 100));
		dato--;
	}
}
 
int main()
{
	dato = 1;
	thread t1(modifica);
	thread t2(modifica);
	t1.join();
	t2.join();
	cout << "dato: " << dato << endl;
	return 0;
};
