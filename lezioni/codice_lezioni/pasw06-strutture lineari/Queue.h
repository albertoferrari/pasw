#ifndef QUEUE_H
#define QUEUE_H
#include "Nodo.h"

class Queue
{
    public:
        Queue();
        virtual ~Queue();
        void enqueu(link);
        link dequeue();
        bool empty();

    private:
        link head;
        link tail;
};

#endif // QUEUE_H
