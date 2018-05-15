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
};
#endif // PERSONA_H
