/*
 * testThread01.cpp
 */

#include <iostream>			// std::cout
#include <thread>			// std::thread

class Dummy {
  public :
    void operator()() {
      std::cout<<"Hello Concurrent World";
    }
};
 
int main() {
 Dummy w;
 std::thread t(w);	
 t.join();		
}

    
