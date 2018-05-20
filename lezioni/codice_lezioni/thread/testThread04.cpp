/*
 * testThread04.cpp
 */

#include <iostream>			// std::cout
#include <thread>			// std::thread

class Dummy {
  public:
    Dummy(): val(0){}
    int getVal() { return val; }
    void operator()() {
	  val++;
      std::cout<<"thread: value is " << val << std::endl;
    }
  private:
	int val;
    
};
 
int main() {
 Dummy w;
 std::thread t(std::ref(w));	
 t.join();	
 std::cout << "process: value is " << w.getVal() << std::endl;	
}
    
