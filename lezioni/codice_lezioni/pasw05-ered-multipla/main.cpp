#include <iostream>
#include "MiaData.h"
#include "MiaOra.h"
#include "MiaDataOra.h"

using namespace std;

int main()
{
    MiaData md = MiaData(2018,2,26);
    md.stampa();
    cout << endl;
    MiaData md2;
    md = MiaData();
    md2.stampa();
    cout << endl;
    MiaOra mo = MiaOra(22,45);
    mo.stampa();
    cout << endl;
    MiaDataOra mdo = MiaDataOra(2018,3,5,9,30,"lunedi");
    mdo.stampa();
    return 0;
}
