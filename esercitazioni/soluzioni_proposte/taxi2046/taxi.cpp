#include <vector>
#include <algorithm>
#include <iostream>
#include <thread>
#include "taxi.h"
#include "mezzo.h"


// inserisce taxi m fra i mezzi di trasporto della compagnia comp
void ServizioTaxi::addTaxi(MezzoDiTrasporto* m, int comp)
{
    compagnia[comp].push_back(m);
}

// restituisce codice mezzo più rapido della compagnia c e relativo tempo
void ServizioTaxi::piuRapido(Posizione p, Posizione d, int c, int &t, int &codice)
{
    // ipotesi compagnia abbia almeno un mezzo
    codice = compagnia[c][0]->getCodice();
    t = compagnia[c][0]->tempo(p,d);
    for (auto *m: compagnia[c])
        if (m->tempo(p,d) < t)
        {
            t = m->tempo(p,d);
            codice = m->getCodice();
        }
    std::string s = "Compagnia " + std::to_string(c) + " codice mezzo " +
                    std::to_string(codice) + " tempo " + std::to_string(t) + "\n";
    std::cout <<  s;            // visualizzazione risultato ottenuto da un thread
}

int ServizioTaxi::fornisciTaxi(Posizione partenza, Posizione destinazione)
{
    std::vector<int> t(nCompagnie, 0);      // tempo del mezzo più rapido di una compagnia
    std::vector<int> c(nCompagnie, 0);      // codice del mezzo più rapido di una compagnia
    std::thread th[nCompagnie];             // un thread per ogni compagnia
    // ricerca tempo minore e codice
    for (int i=0;i<nCompagnie;i++)
    {
        th[i] = std::thread(&ServizioTaxi::piuRapido,this,partenza,destinazione,i,std::ref(t[i]),std::ref(c[i]));
    }
    for (int i=0;i<nCompagnie;i++)
    {
        th[i].join();       // attesa terminazione thread
    }
    // termpo minore fra le varie compagnie
    std::vector<int>::iterator bestTime = std::min_element(std::begin(t), std::end(t));
    // compagnia che ha ottenuto il tempo migliore
    int bestCompany =  std::distance(std::begin(t), bestTime);
    return c[bestCompany];      // codice del mezzo
}

std::string ServizioTaxi::toString()
{
    std::string s = "Servizio taxi\n";
    for (int i=0;i<nCompagnie;i++)
    {
        s += "Compagnia " + std::to_string(i) + "\n";
        for (auto *m: compagnia[i])
            s = s + m->toString() + "\n";
    }
    return s;
}
