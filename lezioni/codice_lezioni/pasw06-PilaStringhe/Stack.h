#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "Nodo.h"

class Stack {
private:
   Nodo * top;
public:
   Stack();
   ~Stack();
   void push(const std::string & value);
   bool pop(std::string & value);
   bool empty() const;

   friend std::ostream & operator<< (std::ostream & os, const Stack & st);
};

Stack::Stack() : top(nullptr) { }

Stack::~Stack() {
   while (top) {
      Nodo * temp = top;
      top = top->next;
      delete temp;
   }
}

bool Stack::empty() const { return top == nullptr; }

void Stack::push(const std::string & value) {
   Nodo * newNodo = new Nodo(value);
   newNodo->next = top;
   top = newNodo;
}

bool Stack::pop(std::string & value) {
   if (empty()) return false;
   value = top->info;
   Nodo * temp = top;
   top = top->next;
   delete temp;				// deallocazione
   return true;
}

// operatore di inserimento in stream
std::ostream & operator<< (std::ostream & os, const Stack & st) {
   os << '{';
   if (!st.empty()) {
      Nodo * p = st.top;
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

