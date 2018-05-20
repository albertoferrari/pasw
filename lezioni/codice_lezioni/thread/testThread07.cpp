/*
 * testThread07.cpp
 */

#include <iostream>			// std::cout
#include <thread>			// std::thread
 
using namespace std;
 
void stampa(string testo){
 for(unsigned int a=0;a<testo.length();a++){
	 cout << testo[a];
	 flush(cout);
	 std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 300));
 }
 cout << endl;
}
 
class Replicante
{
public :
 string testo;
 Replicante(string t){
	testo=t;
 }
 void operator()()
 {
	stampa(testo);
 }
};
 
int main()
{
 thread t1(Replicante("Io ne ho viste cose che voi umani non potreste immaginarvi: navi da combattimento in fiamme al largo dei bastioni di Orione"));
 thread t2(Replicante("I've seen things you people wouldn't believe, attack ships on fire off the shoulder of Orion"));
 t1.join();
 t2.join();
}
