#include <iostream>     // std::cout
#include <algorithm>    // std::count
#include <vector>       // std::vector

bool IsOdd (int i) { return ((i%2)==1); }

int main () {
  // counting elements in array:
  int myints[] = {10,20,55,35,20,10,10,20};   // 8 elements
  int mycount = std::count (myints, myints+8, 10);
  std::cout << "10 appears " << mycount << " times.\n";

  // counting elements in container:
  std::vector<int> myvector (myints, myints+8);
  mycount = std::count (myvector.begin(), myvector.end(), 20);
  std::cout << "20 appears " << mycount  << " times.\n";

  mycount = count_if (myvector.begin(), myvector.end(), IsOdd);
  std::cout << "myvector contains " << mycount  << " odd values.\n";

  return 0;
}
