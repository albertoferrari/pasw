#include <iostream>
#include <string>
#include "Lista.h"

using namespace std;

int main()
{
    Lista lis;
    string s;
    lis.insTesta("hello");
    cout << "lis.insTesta(\"hello\");" << endl;
    cout << "lis = " << lis << endl;
    cout << "lis.elimTesta(s);" << endl;
    lis.elimTesta(s);
    cout << "s = " << s << endl;
    cout << "lis = " << lis << endl;

    cout << "lis.insCoda(\"hello\");" << endl;
    lis.insCoda("hello");
    cout << "lis = " << lis << endl;
    cout << "lis.insCoda(\"world\");" << endl;
    lis.insCoda("world");
    cout << "lis = " << lis << endl;

    Lista l2;
    l2.insTesta("Mondo");
    l2.insTesta("Ciao");
    cout << "lista l2 = " << l2 << endl;

    Lista* l3;
    l3 = lis+l2;
    cout << "l3 = lis + l2" << endl;
    cout << "*l3 = " << *l3 << endl;

    lis.elimCoda(s);
    cout << "lis.elimCoda(s);" << endl;
    cout << "s = " << s << " lis = " << lis << endl;
    lis.elimTesta(s);
    cout << "lis.elimTesta(s);" << endl;
    cout << "s = " << s << " lis = " << lis << endl;

    cout << "*l3 = " << *l3 << endl;
    return 0;
}
