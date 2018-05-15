#ifndef RICERCATORE_H
#define RICERCATORE_H
#include <vector>

using namespace std;
#include "Persona.h"

class Ricercatore : public Persona {

	private:
		vector<string> ambiti;
	public:
		Ricercatore(string cognome, string nome, string matricola);
		virtual ~Ricercatore();
		void addAmbito(string a);
		vector<string> getAmbiti() const;
		virtual string summary() override;
};
#endif // RICERCATORE_H
