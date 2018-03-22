#ifndef MIADATAORA_H
#define MIADATAORA_H

#include <MiaData.h>
#include <MiaOra.h>
#include <string>

class MiaDataOra : public MiaData, public MiaOra
{
    public:
        MiaDataOra();
        MiaDataOra(int anno, int mese, int giorno, int ora, int minuto, std::string giornoSett);
        std::string GetgiornoSett() { return giornoSett; }
        void SetgiornoSett(std::string val) { giornoSett = val; }
        void stampa() const;
    private:
        std::string giornoSett;
};

#endif // MIADATAORA_H
