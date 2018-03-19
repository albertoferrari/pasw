#ifndef ANIMALE_H
#define ANIMALE_H

class Animale
{
    public:
        Animale(const int = 0 , const int = 0);
        int Getaltezza() { return altezza; }
        void Setaltezza(int val) { altezza = val; }
        int Getpeso() { return peso; }
        void Setpeso(int val) { peso = val; }
        void visualizza() const;
    private:
        int altezza;
        int peso;
};

#endif // ANIMALE_H
