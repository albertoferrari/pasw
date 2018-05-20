/*
 * testThread10.cpp
 */

#include <iostream>			// std::cout
#include <thread>			// std::thread
#include <mutex>			// std::mutex
 
using namespace std;
 
void modifica(int &d, mutex &m){
	m.lock();
	if (d>0) {
		std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 100));
		d--;
	}
	m.unlock();
}
 
int main()
{
	int dato = 1;
	mutex mtx;
	thread t1(modifica,ref(dato),ref(mtx));
	thread t2(modifica,ref(dato),ref(mtx));
	t1.join();
	t2.join();
	cout << "dato: " << dato << endl;
	return 0;
};
