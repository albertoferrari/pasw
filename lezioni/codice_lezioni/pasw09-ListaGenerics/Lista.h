#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "Nodo.h"

// Forward Reference ridefinizione operatore inserimento in stream
template <typename E>
std::ostream & operator<<(std::ostream & os, const Lista<E> & lst);


template <typename E>
class Lista {
private:
   Nodo<E> * testa;
public:
   Lista();
   ~Lista();
   void insTesta(const E &value);
   void insCoda(const E &value);
   bool elimTesta(E &value);
   bool elimCoda(E & value);
   bool vuota() const;
   Lista<E>* operator+(Lista<E> altraLista);
   friend std::ostream & operator<< <>(std::ostream & os, const Lista<E> & lst);
};

template <typename E>
Lista<E>::Lista() : testa(nullptr) { }

template <typename E>
Lista<E>::~Lista() {
   while (testa) {
      Nodo<E> * temp = testa;
      testa = testa->next;
      delete temp;
   }
}

template <typename E>
bool Lista<E>::vuota() const { return testa == nullptr; }

template <typename E>
void Lista<E>::insTesta(const E &value) {
   Nodo<E> * newNodo = new Nodo<E>(value);
   newNodo->next = testa;
   testa = newNodo;
}

template <typename E>
void Lista<E>::insCoda(const E & value) {
   Nodo<E> * newNodo = new Nodo<E>(value);
   if (vuota()) {
      testa = newNodo;
   } else {
	  Nodo<E> * temp = testa;
      while(temp->next)
		temp = temp->next;
      temp->next = newNodo;
   }
}

template <typename E>
bool Lista<E>::elimTesta(E & value) {
   if (vuota()) return false;
   value = testa->info;
   Nodo<E> * temp = testa;
   testa = testa->next;
   delete temp;				// deallocazione
   return true;
}

template <typename E>
bool Lista<E>::elimCoda(E & value) {
   if (vuota()) return false;
   if (!testa->next) return elimTesta(value);  // un solo nodo
   Nodo<E> * temp = testa;
   while((temp->next)->next) // sposto temp al penultimo elemento
	  temp = temp->next;
   value = temp->next->info;
   delete temp->next;        // deallocazione ultimo elemento
   temp->next = nullptr;
   return true;
}

template <typename E>
std::ostream & operator<< (std::ostream & os, const Lista<E> & lst) {
   os << '{';
   if (!lst.vuota()) {
      Nodo<E> * p = lst.testa;
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

template <typename E>
Lista<E>* Lista<E>::operator+(Lista<E> altraLista) {
 Lista* newList = new Lista();
 Nodo<E>* t = testa;
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

