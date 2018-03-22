#ifndef MIADATA_H
#define MIADATA_H

class MiaData
{
    public:
        MiaData();
        MiaData(int anno, int mese, int giorno);
        int Getanno() { return anno; }
        void Setanno(int val) { anno = val; }
        int Getmese() { return mese; }
        void Setmese(int val) { mese = val; }
        int Getgiorno() { return giorno; }
        void Setgiorno(int val) { giorno = val; }
        void stampa() const;
    private:
        int anno;
        int mese;
        int giorno;
};

#endif // MIADATA_H
