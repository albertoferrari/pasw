/*
 * testThread13.cpp
 */

#include <iostream>			// std::cout
#include <thread>			// std::thread
#include <mutex>

/*
 * run at:
 * http://en.cppreference.com/w/cpp/thread/timed_mutex/try_lock_for
 * possible output:
 * f_th1: a locked
 * f_th2: b locked
 * f_th1: b timout
 * f_th2: a locked
 * f_th2: terminated
 * end program
*/

using namespace std;
 
void f_th1(timed_mutex &a,timed_mutex &b) {
	if (a.try_lock_for(chrono::milliseconds(rand() % 1000))) {
		cout << "f_th1: a locked\n";
		this_thread::sleep_for(chrono::milliseconds(rand() % 100));
		if (b.try_lock_for(chrono::milliseconds(rand() % 1000))) {
			cout << "f_th1: b locked\n";
			this_thread::sleep_for(chrono::milliseconds(rand() % 1000));
			b.unlock();
			a.unlock();
			cout << "f_th1: terminated\n";
		} else {
		    a.unlock();
			cout << "f_th1: b timout\n";
		}
	} else {
		cout << "f_th1: a timout\n";
	}
}
 
void f_th2(timed_mutex &a,timed_mutex &b) {
	if (b.try_lock_for(chrono::milliseconds(rand() % 1000))) {
		cout << "f_th2: b locked\n";
		this_thread::sleep_for(chrono::milliseconds(rand() % 100));
		if (a.try_lock_for(chrono::milliseconds(rand() % 1000))) {
			cout << "f_th2: a locked\n";
			this_thread::sleep_for(chrono::milliseconds(rand() % 1000));
			a.unlock();
			b.unlock();
			cout << "f_th2: terminated\n";
		} else {
		    b.unlock();
			cout << "f_th2: a timout\n";
		}
	} else {
		cout << "f_th2: b timout\n";
	}
}
 
int main() {
 timed_mutex mtx1,mtx2;
 std::thread t1(f_th1,ref(mtx1),ref(mtx2));	
 std::thread t2(f_th2,ref(mtx1),ref(mtx2));	 
 t1.join();	
 t2.join();
 cout << "end program\n";
 return 0;	
}

    
