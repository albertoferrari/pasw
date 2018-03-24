#include "Stack.h"
#include "Nodo.h"

Stack::Stack(): top(nullptr) {}

Stack::~Stack() {}

void Stack::push(link n)
{
    n->setNext(top);
    top = n;
}

link Stack::pop()
{
    if (empty())
        return nullptr;
    link t = top;
    top = top->getNext();
    return t;
}

bool Stack::empty()
{
    if (top)
        return false;
    return true;
}
