#ifndef DIPARTIMENTO_H
#define DIPARTIMENTO_H
#include <string>
#include <set>
#include "Persona.h"
using namespace std;

struct PersonaPtrComp
{
  bool operator()(const Persona* a, const Persona* b) const  {
    if (a->getFamilyName() <  b->getFamilyName())
        return true;
    if (a->getFamilyName() == b->getFamilyName() && a->getName() <  b->getName())
        return true;
    if (a->getFamilyName() == b->getFamilyName() && a->getName() == b->getName()
                && a->getMatricola() <b ->getMatricola())
        return true;
    return false;
  }
};

class Dipartimento {

	private:
		string nome;
		set<Persona*,PersonaPtrComp> gruppo;
	public:
		Dipartimento(string nome);
		virtual ~Dipartimento();
		void addPersona(Persona* p);
		set<Persona*,PersonaPtrComp> getGruppo() const;
		string getName();
		void saveToFile();
};
#endif // DIPARTIMENTO_H
