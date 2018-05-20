/*
 * testThread14.cpp
 */

#include <iostream>			// std::cout
#include <thread>			// std::thread
#include <mutex>

using namespace std;
 
void f_th1(mutex &a,mutex &b) {
	unique_lock<mutex> lock_a(a, defer_lock);
	this_thread::sleep_for(chrono::milliseconds(rand() % 1000));
	unique_lock<mutex> lock_b(b, defer_lock);
	this_thread::sleep_for(chrono::milliseconds(rand() % 1000));
	lock(lock_a,lock_b);
	this_thread::sleep_for(chrono::milliseconds(rand() % 1000));
	cout << "f_th1: terminated\n";
}
 
void f_th2(mutex &a,mutex &b) {
	unique_lock<mutex> lock_b(b, defer_lock);
	this_thread::sleep_for(chrono::milliseconds(rand() % 1000));
	unique_lock<mutex> lock_a(a, defer_lock);
	this_thread::sleep_for(chrono::milliseconds(rand() % 1000));
	lock(lock_a,lock_b);
	this_thread::sleep_for(chrono::milliseconds(rand() % 1000));
	cout << "f_th2: terminated\n";
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

    
