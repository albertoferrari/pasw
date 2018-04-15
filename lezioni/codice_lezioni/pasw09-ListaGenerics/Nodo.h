#ifndef NODO_H
#define NODO_H

template <typename E> class Lista;  // Forward reference

template <typename E>
class Nodo {
private:
   E info;
   Nodo * next;
public:
   Nodo (E e) : info(e), next(nullptr) { };
   E getInfo() const { return info; };
   Nodo * getNext() const { return next; }

   friend class Lista<E>;  // Lista classe friend per accesso ai membri privati
};

#endif // NODO_H
