#include <iostream>

int *inputVal(){
  int tmp[1000];
  for(int i=0;i<1000;i++)
	tmp[i] = i*10;
  return tmp;
}

int main() {
	int *p;
	p = inputVal();
	std::cout << p[2];
}
