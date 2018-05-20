/*
 * testThread06.cpp
 */

#include <iostream>			// std::cout
#include <thread>			// std::thread
 
void thread_function(int n){
  std::this_thread::sleep_for(std::chrono::milliseconds(1000*n)); 
  std::cout<<"Inside Thread :: ID  = "<<std::this_thread::get_id()<<std::endl;   
}

int main() {
    std::thread threadObj1(thread_function,2);
    std::thread threadObj2(thread_function,5);
    if(threadObj1.get_id() != threadObj2.get_id())
        std::cout<<"Both Threads have different IDs \n";
    std::cout<<"From Main Thread :: ID of Thread 1 = "<<threadObj1.get_id()<<std::endl;    
    std::cout<<"From Main Thread :: ID of Thread 2 = "<<threadObj2.get_id()<<std::endl;    
    threadObj1.join();    
    threadObj2.join(); 
    return 0;
}

