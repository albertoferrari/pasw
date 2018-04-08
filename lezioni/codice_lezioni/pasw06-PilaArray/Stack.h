#ifndef STACK_H
#define STACK_H

#include <iostream>

class Stack {
private:
   std::string * dati;        // Array che contiene i dati dello stack
   int top;                   // testa dello stack (-1 stack vuoto)
   int capacita;              // capacita dell'array
   int incremento;            // incremento capacita se stack pieno
public:
   Stack(int capacita = 10, int incremento = 10);
   ~Stack();
   void push(const std::string & val);
   bool pop(std::string & val);
   bool empty() const;
   // operatore di inserimento in stream
   friend std::ostream & operator<<(std::ostream & os, const Stack & s);
};

Stack::Stack(int cap, int inc) : capacita(cap), incremento(inc) {
   dati = new std::string[capacita];
   top = -1;
}

Stack::~Stack() {
   delete[] dati;
}

bool Stack::empty() const { return top < 0; }

void Stack::push(const std::string & val) {
   if (top >= (capacita - 1)) {
      capacita += incremento;
      std::string * newDati = new std::string[capacita];
      for (int i = 0; i <= top; ++i)
         newDati[i] = dati[i];
      delete[] dati;
      dati = newDati;
   }
   top++;
   dati[top] = val;
}

bool Stack::pop(std::string & val) {
   if (empty()) return false;
   val = dati[top];
   top--;
   return true;
}

std::ostream & operator<< (std::ostream & os, const Stack & st) {
   os << '{';
   for (int i = st.top; i >= 0; i--) {
      os << st.dati[i];
      if (i > 0) os << ',';
   }
   os << '}';
   return os;
}

#endif
