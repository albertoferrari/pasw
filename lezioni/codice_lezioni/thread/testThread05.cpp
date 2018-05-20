/*
 * testThread05.cpp
 */

#include <iostream>			// std::cout
#include <thread>			// std::thread

using namespace std;
 
void proc_thread_1(){
	for(int n=0;n<10;n++){
		std::this_thread::sleep_for(std::chrono::milliseconds(300));
		cout <<  "thread 1: " << to_string(n) << endl;
	}	
}
 
void proc_thread_2(){
	for(int n=0;n<20;n++){
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		cout <<  "thread 2: " << to_string(n) << endl;	
	}
}
 
int main()
{
	thread t1(proc_thread_1);		
	thread t2(proc_thread_2);
	t1.join();		
	t2.detach();
	char f;
	cin >> f;
}
    
