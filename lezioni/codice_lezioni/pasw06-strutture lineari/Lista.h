#ifndef LISTA_H
#define LISTA_H
#include<iostream>
#include "Nodo.h"

class Lista
{
    public:
        Lista();
        Lista(link t);
        virtual ~Lista();
        void insTesta(link);
        link elimTesta();
        void insCoda(link);
        link elimCoda();
        link elimina(int);
        void inserisci(link,int);
        void inverti();
        void stampa();
        Lista operator+(Lista tail);
        friend std::ostream & operator<<( std::ostream &out, Lista &lis);
    private:
        link testa;
};

#endif // LISTA_H
