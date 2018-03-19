#include "Cane.h"
#include<iostream>

using namespace std;

Cane::Cane( const int a, const int p, string n ): Animale( a, p)
{
	SetNome( n );
}
void Cane::visualizza() const
{
    cout << "Sono un cane di nome: " << nome ;
    Animale::visualizza();
}

