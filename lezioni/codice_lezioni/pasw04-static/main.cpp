#include <iostream>
#include "Cameriere.h"

using namespace std;

int main( )
{
    Cameriere c1("Ado"), c2("Giovanni"), c3("Giacomo");
    int numero, pers;
    do
    {
        cout << "Quanti clienti nel gruppo? ";
        cin >> numero;
        cout << "I clienti da servire: ";
        for (pers = 0; pers < numero; pers++)
            cout << Cameriere::getClienteDaServire() << ' ';
        cout << endl;
        c1.serviCliente();
        c2.serviCliente();
        c3.serviCliente();
    } while (Cameriere::isAperto());

    cout << "Servizio chiuso\n";

    return 0;
}
