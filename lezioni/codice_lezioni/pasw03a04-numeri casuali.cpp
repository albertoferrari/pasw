#include <cstdlib>
#include <iostream>
#include <ctime>
int main() {
	std::srand(std::time(nullptr)); // use current time as seed for random generator
	int random_variable = std::rand();
	std::cout << "Random value on [0 " << RAND_MAX << "]: " << random_variable << '\n';
	int range;
	std::cout << "Insert range ";
	std::cin >> range;
	std::cout << "Random value on [0 " << range << "]: " << random_variable % range << '\n';
	return 0;
}
