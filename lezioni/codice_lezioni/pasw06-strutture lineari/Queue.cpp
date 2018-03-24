#include "Queue.h"

Queue::Queue(): head(nullptr), tail(nullptr) {}

Queue::~Queue() {}

void Queue::enqueu(link p)
{
    link t = tail;
    tail = p;
    if (empty())
        head = tail;
    else
        t->setNext(tail);
}

link Queue::dequeue()
{
    if (empty())
        return nullptr;
    link p = head;
    head = head->getNext();
    if (empty())
        tail = nullptr;
    p->setNext(nullptr);
    return p;
}

bool Queue::empty()
{
    return (head==nullptr);
}
