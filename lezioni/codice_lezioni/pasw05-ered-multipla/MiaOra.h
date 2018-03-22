#ifndef MIAORA_H
#define MIAORA_H

class MiaOra
{
    public:
        MiaOra();
        MiaOra(int minuto, int secondo);
        int Getminuto() { return minuto; }
        void Setminuto(int val) { minuto = val; }
        int Getsecondo() { return secondo; }
        void Setsecondo(int val) { secondo = val; }
        void stampa() const;
    private:
        int minuto;
        int secondo;
};

#endif // MIAORA_H
