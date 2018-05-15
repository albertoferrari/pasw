#ifndef DIPARTIMENTO_H
#define DIPARTIMENTO_H
#include <string>
#include <vector>
#include "Persona.h"
using namespace std;

class Dipartimento {

	private:
		string nome;
		vector<Persona*> gruppo;
	public:
		Dipartimento(string nome);
		virtual ~Dipartimento();
		void addPersona(Persona* p);
		vector<Persona*> getGruppo() const;
		string getName();
		void saveToFile();
};
#endif // DIPARTIMENTO_H
