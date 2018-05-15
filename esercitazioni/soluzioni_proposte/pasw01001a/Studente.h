#ifndef STUDENTE_H
#define STUDENTE_H

#include "Persona.h"

class Studente : public Persona
{
    public:
	    Studente();
		Studente(string cognome, string nome, string matricola, string corsolaurea);
		string getCorsoLaurea() const;
		virtual string summary() override;
		virtual ~Studente();
 	private:
		string _corsolaurea;
};
#endif // STUDENTE_H
