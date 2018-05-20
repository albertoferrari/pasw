/*
 * testThread00.cpp
 * linux compilare con 
 * g++ testThread00.cpp -o testThread00 -pthread
 */

#include <iostream>			// std::cout
#include <thread>			// std::thread

void hello()
{
	std::cout<<"Hello Concurrent World\n";
}

int main()
{
	std::thread t(hello);
	t.join();
}      
