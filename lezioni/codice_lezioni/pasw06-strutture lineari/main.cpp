#include <iostream>
#include "Lista.h"
#include "Stack.h"
#include "Queue.h"

using namespace std;

int main()
{
    cout << "lista" << endl;
    Lista l1;
    l1.insTesta(new Nodo("Giacomo"));
    l1.insTesta(new Nodo("Giovanni"));
    l1.insTesta(new Nodo("Aldo"));
    l1.stampa();
    l1.inverti();
    l1.stampa();
    link ultimo;
    ultimo = l1.elimCoda();
    while (ultimo)
    {
        std::cout << ultimo->getInfo() << std::endl;
        ultimo = l1.elimCoda();
    }

    cout << endl << "stack" << endl;
    Stack s;
    s.push(new Nodo("Jack"));
    s.push(new Nodo("John"));
    s.push(new Nodo("Paul"));
    while (!s.empty())
    {
        cout << s.pop()->getInfo() << endl;
    }

    cout << endl << "queue" << endl;
    Queue q;
    q.enqueu(new Nodo("alfa"));
    q.enqueu(new Nodo("beta"));
    q.enqueu(new Nodo("gamma"));
    while (!q.empty())
    {
        cout << q.dequeue()->getInfo() << endl;
    }
    return 0;
}
