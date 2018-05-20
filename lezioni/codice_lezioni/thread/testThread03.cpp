/*
 * testThread03.cpp
 */

#include <iostream>			// std::cout
#include <thread>			// std::thread

void t_f(int &f) {
  f++;  
}

int main() {
  int a = 5;
  std::thread t(t_f,std::ref(a));
  t.join();
  std::cout << "a = " << a;
  return 0;
}

    
