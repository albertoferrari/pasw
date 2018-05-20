/*
 * testThread06b.cpp
 */

#include <iostream>       // std::cout
#include <thread>         // std::thread, std::thread::id, std::this_thread::get_id

using namespace std;

thread::id main_thread_id = this_thread::get_id();

void is_main_thread() {
	cout << this_thread::get_id() << " : ";
	if ( main_thread_id == this_thread::get_id() )
		cout << "This is the main thread" << endl;
	else
		cout << "This is not the main thread" << endl;
}

int main() {
	is_main_thread();
	thread th (is_main_thread);
	th.join();
}
