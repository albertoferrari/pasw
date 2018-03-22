#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"

class Lista
{
    public:
        Lista();
        Lista(link t);
        virtual ~Lista();
        void insTesta(std::string s);
        void stampa();
    private:
        link testa;
};

#endif // LISTA_H
