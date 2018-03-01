#include <iostream>
int main() {
    int i;
    double d;
    float f;
    char c;
    bool b;
    int v[10];
    int *pi;
    double *pd;
    std::cout << "size of int:     " << sizeof i  << " bytes " << std::endl;
	std::cout << "size of double:  " << sizeof d  << " bytes " << std::endl;
    std::cout << "size of float:   " << sizeof f  << " bytes " << std::endl;
	std::cout << "size of char:    " << sizeof c  << " bytes " << std::endl;
    std::cout << "size of bool:    " << sizeof b  << " bytes " << std::endl;
	std::cout << "size of int[10]: " << sizeof v  << " bytes " << std::endl;
    std::cout << "size of int*:    " << sizeof pi << " bytes " << std::endl;
	std::cout << "size of double*: " << sizeof pd << " bytes " << std::endl;	
}
 
