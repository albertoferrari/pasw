#ifndef CANE_H
#define CANE_H

#include <Animale.h>
#include <string>

using namespace std;

class Cane : public Animale
{
    public:
        Cane( const int = 0 , const int = 0, string nome = "Bill");
        string Getnome() { return nome; }
        void SetNome(string val) { nome = val; }
        void visualizza() const;
    private:
        string nome;
};

#endif // CANE_H

