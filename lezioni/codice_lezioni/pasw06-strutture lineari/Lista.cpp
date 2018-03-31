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

void Lista::insCoda(link n)
{
    if (testa==nullptr) {
        insTesta(n);
        return;
    }
    link t = testa;
    while(t->getNext()!=nullptr) {
        t = t->getNext();
    }
    t->setNext(n);
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

link Lista::elimTesta() {
    if (testa==nullptr)
        return nullptr;
    link t = testa;
    testa = testa->getNext();
    t->setNext(nullptr);
    return t;
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

Lista Lista::operator+(Lista tail) {
    Lista newList;
    link t = testa;
    while (t!=nullptr) {
        newList.insCoda(new Nodo(t->getInfo()));
        t=t->getNext();
    }
    t=tail.testa;
    while (t!=nullptr) {
        newList.insCoda(new Nodo(t->getInfo()));
        t=t->getNext();
    }
    return newList;
}

std::ostream & operator<<( std::ostream &out, Lista &lis)
{
    link t = lis.testa;
    while (t!=nullptr) {
        out << t->getInfo() << " -> ";
        t = t->getNext();
    }
    out << "// " << std::endl;
}
