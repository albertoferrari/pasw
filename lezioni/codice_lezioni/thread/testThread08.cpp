/*
 * testThread08.cpp
 */

#include <iostream>			// std::cout
#include <thread>			// std::thread
#include <mutex>			// std::mutex
 
using namespace std;
 
void stampa(string testo){
 for(unsigned int a=0;a<testo.length();a++){
	 cout << testo[a];
	 flush(cout);
	 std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 100));
 }
 cout << endl;
}
 
class Replicante
{
public :
 string testo;
 mutex *m;
 Replicante(string t, mutex *mtx){
	m = mtx;
	testo=t;
 }
 void operator()()
 {
	m->lock();
	stampa(testo);
	m->unlock();
 }
};
 
int main()
{
 mutex *m= new mutex();
 thread t1(Replicante("Io ne ho viste cose che voi umani non potreste immaginarvi: navi da combattimento in fiamme al largo dei bastioni di Orione",m));
 thread t2(Replicante("I've seen things you people wouldn't believe, attack ships on fire off the shoulder of Orion",m));
 t1.join();
 t2.join();
};
