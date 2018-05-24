#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
 
using namespace std;
 
class Esecutore {
public :
 
    int num_th;					// numero del thread
    condition_variable *coda;	// coda di attesa
    mutex *m;					// nutex per la coda
    Esecutore(int n, condition_variable *cond, mutex *mtx) {
        coda=cond;
        num_th=n;
        m=mtx;
    }
    void operator()()
    {
        string s_out = "thread " + to_string(num_th) + " in coda\n";
        cout << s_out;
        unique_lock<std::mutex> lk(*m);
        coda->wait(lk);
        s_out = "thread " + to_string(num_th) + " risvegliato\n";
        cout << s_out;
    }
};
 
int main() {
    // coda di attesa e realtivo mutex
    condition_variable *coda = new condition_variable();
    mutex *m= new mutex();
    
    const int n_th = 7;		// numero di thread
    int t;					// indice thread
 
    thread* threads[n_th];	// array di puntatori a thread
 
	// creazione thread 
    for(t=0; t<n_th; t++){
        threads[t]= new thread(Esecutore(t,coda,m));
        this_thread::sleep_for(chrono::milliseconds(rand() % 500));
    }
    
    // risveglio tutti i thread tranne gli ultimi 3
    for(t=0; t<n_th-3; t++){
        this_thread::sleep_for(chrono::milliseconds(rand() % 1000));
        coda->notify_one();
    }
    
    this_thread::sleep_for(chrono::milliseconds(3000));
    // risveglio tutti i thread rimanenti
    coda->notify_all();
    
    for(t=0; t<n_th; t++)
    {
        threads[t]->join();
        delete(threads[t]);
    }
}
