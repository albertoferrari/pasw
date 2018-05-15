#ifndef DOCENTE_H
#define DOCENTE_H

#include "Persona.h"
#include <vector>

using namespace std;

struct Corso {
	int idcorso;
	string nome;
	string settore;
};

class Docente : public Persona {

	private:
		vector<Corso> corsi;

	public:
		Docente(string cognome, string nome, string matricola);
		virtual ~Docente();
		void addCorso(Corso c);
		vector<Corso> getCorsi() const;
		virtual string summary() override;
};
#endif // DOCENTE_H
