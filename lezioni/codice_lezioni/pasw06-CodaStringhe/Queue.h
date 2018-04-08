#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include "Nodo.h"

class Queue {
    public:
        Queue();
        virtual ~Queue();
        void enqueue(const std::string &value);
        bool dequeue(std::string &value);
        bool empty() const;
    private:
        Nodo* head;
        Nodo* tail;

friend std::ostream & operator<< (std::ostream & os, const Queue & q);
};


Queue::Queue() : head(nullptr), tail(nullptr) { }

Queue::~Queue() {
   while (head) {
      Nodo * temp = head;
      head = head->next;
      delete temp;
   }
}

bool Queue::empty() const { return head == nullptr; }

void Queue::enqueue(const std::string &value) {
    Nodo* t = tail;
    tail = new Nodo(value);;
    if (empty())
        head = tail;
    else
        t->next = tail;
}


bool Queue::dequeue(std::string &value) {
    if (empty()) return false;
    Nodo* p = head;
    head = head->getNext();
    if (empty()) tail = nullptr;
    value = p->getInfo();
    delete p;
    return true;
}


// operatore di inserimento in stream
std::ostream & operator<< (std::ostream & os, const Queue & q) {
   os << '{';
   if (!q.empty()) {
      Nodo * p = q.head;
      while (p) {
         os << p->getInfo();
         if (p->getNext() != nullptr)
			os << ',';
         p = p->getNext();
      }
   }
   os << '}';
   return os;
}

#endif

