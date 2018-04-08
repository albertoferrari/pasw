#include <iostream>
#include "Stack.h"
using namespace std;

int main() {

   Stack st1;
   cout << "st1 = " << st1 << endl;
   cout << "st1.push(\"hello\");" << endl;
   st1.push("hello");
   cout << "st1.push(\"world\");" << endl;
   st1.push("world");
   cout << "st1 = " << st1 << endl;
   string s;
   while(st1.pop(s))
   {
      cout << "st1.pop(s) -> ";
      cout << "s = " << s << endl;
   }
   cout << "st1 = " << st1 << endl;
   return 0;
}
