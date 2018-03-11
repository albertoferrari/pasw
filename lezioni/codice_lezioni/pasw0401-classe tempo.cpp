#include <iostream>
using namespace std;

class Tempo {
public:
   int ore;
   int minuti;
   void visualizza() {
    cout<<ore<<":"<<minuti<<endl;
   }  
private:
};

int main() {
    Tempo t;
    t.ore=9;
    t.minuti=30;
    t.visualizza();
} 
