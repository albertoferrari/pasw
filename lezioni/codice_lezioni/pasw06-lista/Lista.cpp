#include "Lista.h"
#include <iostream>

Lista::Lista()
{
    testa = nullptr;
}

Lista::Lista(link t): testa(t) {}

Lista::~Lista() {}

void Lista::insTesta(std::string s)
{
    link n = new Nodo(s,testa);
    testa = n;
}

void Lista::stampa()
{
    link p = testa;
    while(p)
    {
        std::cout << p->getInfo() << " ";
        p = p->getNext();
    }
    std::cout << std::endl;
}
