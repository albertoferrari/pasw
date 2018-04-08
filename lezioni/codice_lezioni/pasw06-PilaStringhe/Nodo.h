#ifndef NODO_H
#define NODO_H

class Nodo {
private:
   std::string info;
   Nodo * next;
public:
   Nodo (std::string s) : info(s), next(nullptr) { };
   std::string getInfo() const { return info; };
   Nodo * getNext() const { return next; }

   friend class Stack;  // Stack classe friend per accesso ai membri privati
};

#endif // NODO_H
