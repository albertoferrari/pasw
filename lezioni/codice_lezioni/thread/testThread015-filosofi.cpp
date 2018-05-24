#include <iostream>
#include <thread>
#include <string>
#include <mutex>

using namespace std;

class Filosofo {
private:
	int id;					//identificatore
	mutex *destra;			//forchetta destra
    mutex *sinistra;		//forchetta sinistra
    string pensiero;		//il pensiero del filosofo
public :
    Filosofo(int n, mutex *d, mutex *s, string p): id(n), destra(d), sinistra(s), pensiero(p) {}

    void pensa() {
		string s_pensiero = "filosofo: " + to_string(id) + ": penso " + pensiero + "\n";
        cout << s_pensiero;
        this_thread::sleep_for(chrono::milliseconds(rand() % 1000));
    }

    void mangia() {
        unique_lock<std::mutex> lock_a(*destra, std::defer_lock);
        unique_lock<std::mutex> lock_b(*sinistra, std::defer_lock);
        lock(lock_a,lock_b);
        string s_messaggio = "filosofo: " + to_string(id) + ": mangio\n";
        cout << s_messaggio;
        this_thread::sleep_for(chrono::milliseconds(rand() % 2000));
        s_messaggio = "filosofo: " + to_string(id) + ": ho finito di mangiare\n";
        cout << s_messaggio;
    }

    void operator()() {
        for(int a=0; a<3; a++) {
            pensa();
            mangia();
        }
    }
};


int main() {
    string pensiero[5]= {
            "alla razionalita'",
            "alla liberta'",
            "alle prossime ferie",
            "al senso della vita",
            "all'utopia"
    };
    Filosofo* filosofi[5];
    mutex forchette[5];
    thread* threads[5];
    int f;
    cout << "5 filosofi" << endl;;
    for(f=0; f<5; f++) {
        filosofi[f]=new Filosofo(f,&forchette[f],&forchette[(f+1)%5],pensiero[f]);
        threads[f]= new std::thread(*filosofi[f]);
    }
    for(f=0; f<5; f++) {
        threads[f]->join();
        delete filosofi[f];
        delete threads[f];
    }
    cout << "i 5 filosofi hanno terminato di pensare e di mangiare" << endl;
}
