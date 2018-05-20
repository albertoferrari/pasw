/*
 * testThread02.cpp
 */

#include <iostream>			// std::cout
#include <thread>			// std::thread

void t_f(std::string s,int n) {
 for(int i=0;i<n;i++)
   std::cout<< s << " " << i << std::endl;   
}

int main() {
  std::thread t(t_f,"hello",3);
  t.join();
  return 0;
}

    
