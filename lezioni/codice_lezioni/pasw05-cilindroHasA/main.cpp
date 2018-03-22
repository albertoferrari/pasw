#include <iostream>
#include "Cilindro.h"
using namespace std;

int main()
{
    Cerchio *pc1,*pc2;
    Cerchio c(2,1,1);
    pc2=&c;
    c.setRaggio(10);
    cout << "area " << pc2->area() << endl;
    pc1 = new Cerchio(100,2,4);
    (*pc1).setX(3);
    cout << "area " << pc1->area() << endl;
    return 0;
}
