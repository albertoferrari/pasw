#ifndef PERSONA_H
#define PERSONA_H
#include <string>

using namespace std;

class Persona {

	private:
		string n,c,m;

	public:
		Persona(string cognome, string nome, string matricola);
		virtual ~Persona();
		string getName() const;
		string getFamilyName() const;
		string getMatricola() const;
		virtual string summary();
        static bool compByName(const Persona* a, const Persona* b) {
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
#endif // PERSONA_H
