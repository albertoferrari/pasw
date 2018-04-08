#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "Nodo.h"

class Lista {
private:
   Nodo * testa;
public:
   Lista();
   ~Lista();
   void insTesta(const std::string & value);
   void insCoda(const std::string & value);
   bool elimTesta(std::string & value);
   bool elimCoda(std::string & value);
   bool vuota() const;
   Lista* operator+(Lista altraLista);
   friend std::ostream & operator<< (std::ostream & os, const Lista & lst);
};

Lista::Lista() : testa(nullptr) { }

Lista::~Lista() {
   while (testa) {
      Nodo * temp = testa;
      testa = testa->next;
      delete temp;
   }
}

bool Lista::vuota() const { return testa == nullptr; }

void Lista::insTesta(const std::string & value) {
   Nodo * newNodo = new Nodo(value);
   newNodo->next = testa;
   testa = newNodo;
}

void Lista::insCoda(const std::string & value) {
   Nodo * newNodo = new Nodo(value);
   if (vuota()) {
      testa = newNodo;
   } else {
	  Nodo * temp = testa;
      while(temp->next)
		temp = temp->next;
      temp->next = newNodo;
   }
}

bool Lista::elimTesta(std::string & value) {
   if (vuota()) return false;
   value = testa->info;
   Nodo * temp = testa;
   testa = testa->next;
   delete temp;				// deallocazione
   return true;
}

bool Lista::elimCoda(std::string & value) {
   if (vuota()) return false;
   if (!testa->next) return elimTesta(value);  // un solo nodo
   Nodo * temp = testa;
   while((temp->next)->next) // sposto temp al penultimo elemento
	  temp = temp->next;
   value = temp->next->info;
   delete temp->next;        // deallocazione ultimo elemento
   temp->next = nullptr;
   return true;
}

// operatore di inserimento in stream
std::ostream & operator<< (std::ostream & os, const Lista & lst) {
   os << '{';
   if (!lst.vuota()) {
      Nodo * p = lst.testa;
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

Lista* Lista::operator+(Lista altraLista) {
 Lista* newList = new Lista();
 Nodo* t = testa;
 while (t!=nullptr) {
  newList->insCoda(t->info);
  t=t->next;
 }
 t=altraLista.testa;
 while (t!=nullptr) {
  newList->insCoda(t->info);
  t=t->next;
 }
 return newList;
}


#endif

