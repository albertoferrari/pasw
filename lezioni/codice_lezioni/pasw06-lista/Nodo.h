#ifndef NODO_H
#define NODO_H
#include <string>

class Nodo
{
    public:
        Nodo();
        Nodo(std::string s, Nodo* n);
        virtual ~Nodo();

        std::string getInfo() { return info; }
        void setInfo(std::string val) { info = val; }
        Nodo* getNext() { return next; }
        void setNext(Nodo* val) { next = val; }

    private:
        std::string info;
        Nodo* next;
};

typedef Nodo* link;

#endif // NODO_H
