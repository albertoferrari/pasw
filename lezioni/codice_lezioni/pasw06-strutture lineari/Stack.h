#ifndef STACK_H
#define STACK_H
#include "Nodo.h"

class Stack
{
    public:
        Stack();
        virtual ~Stack();
        void push(link);
        link pop();
        bool empty();
    private:
        link top;
};

#endif // STACK_H
