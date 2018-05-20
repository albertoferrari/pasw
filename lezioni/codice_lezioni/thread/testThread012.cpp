/*
 * testThread12.cpp
 */

#include <iostream>			// std::cout
#include <thread>			// std::thread
#include <mutex>

using namespace std;
 
void f_th1(mutex &a,mutex &b) {
	a.lock();
	cout << "f_th1: a locked\n";
	this_thread::sleep_for(chrono::milliseconds(rand() % 100));
	b.lock();
	cout << "f_th1: b locked\n";
	b.unlock();
	a.unlock(); 
	cout << "f_th1: a & b unlocked\n";
}
 
void f_th2(mutex &a,mutex &b) {
	b.lock();
	cout << "f_th2: b locked\n";
	this_thread::sleep_for(chrono::milliseconds(rand() % 100));
	a.lock();
	cout << "f_th2: a locked\n";
	a.unlock();
	b.unlock(); 
	cout << "f_th2: a & b unlocked\n";
}
 
int main() {
 mutex mtx1,mtx2;
 std::thread t1(f_th1,ref(mtx1),ref(mtx2));	
 std::thread t2(f_th2,ref(mtx1),ref(mtx2));	 
 t1.join();	
 t2.join();
 cout << "end program\n";
 return 0;	
}

    
