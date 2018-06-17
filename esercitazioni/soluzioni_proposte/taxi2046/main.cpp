#include <iostream>
#include <ctime>
#include <string>
#include "posizione.h"
#include "mezzo.h"
#include "auto.h"
#include "drone.h"
#include "taxi.h"

using namespace std;

int main()
{
    // generazione casuale di auto e droni per le due compagnie
    std::srand(std::time(nullptr));
    ServizioTaxi st;
    for (int c=0;c<st.nCompagnie;c++)
        for (int i=0;i<10;i++) {
            int x = std::rand()%3000;
            int y = std::rand()%15000;
            Posizione pa(x,y);
            Auto* a = new Auto(100*c+i,pa);
            st.addTaxi(a,c);
            x = std::rand()%3000;
            y = std::rand()%15000;
            Posizione pd(x,y);
            Drone* d = new Drone(1000*c+10+i,pd);
            st.addTaxi(d,c);
        }
    cout << st.toString();
    Posizione utente(1500,7500);
    Posizione arrivo(500,14000);
    cout << "in arrivo mezzo con codice: " + to_string(st.fornisciTaxi(utente,arrivo));
    return 0;
}
