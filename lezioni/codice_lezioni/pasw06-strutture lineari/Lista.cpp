#include "Lista.h"
#include <iostream>

Lista::Lista()
{
    testa = nullptr;
}

Lista::Lista(link t): testa(t) {}

Lista::~Lista() {}

void Lista::insTesta(link n)
{
    n->setNext(testa);
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

link Lista::elimCoda()
{void inverti();
    if (testa==nullptr)
        return nullptr;
    link el = testa;
    if (testa->getNext()==nullptr) {
        testa = nullptr;
        return el;
    }
    while(el->getNext()->getNext()!=nullptr)
        el = el->getNext();
    link ultimo = el->getNext();
    el->setNext(nullptr);
    return ultimo;
}

void Lista::inverti()
{
    link t,y,r;
    y = testa;
    r = nullptr;
    while (y!=nullptr) {
        t = y->getNext();
        y->setNext(r);
        r = y;
        y = t;
    }
    testa = r;
}
