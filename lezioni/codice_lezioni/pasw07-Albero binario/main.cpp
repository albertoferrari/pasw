#include "AlberoBin.h"
#include <iostream>

using namespace std;

int main()
{
    AlberoBin* a = new AlberoBin("A");
    AlberoBin* b = new AlberoBin("B");
    AlberoBin* c = new AlberoBin("C",a,b);
    AlberoBin* d = new AlberoBin("D");
    AlberoBin* e = new AlberoBin("E",d,c);
    cout << "Ordine anticipato: ";
    e->preOrder();
    cout << endl;
    cout << "Ordine simmetrico: ";
    e->inOrder();
    cout << endl;
    cout << "Ordine differito: ";
    e->postOrder();
    cout << endl;
    return 0;
}
