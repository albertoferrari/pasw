#include "Ricercatore.h"

Ricercatore::Ricercatore(string cognome, string nome, string matricola) : Persona(cognome, nome, matricola) {}

void Ricercatore::addAmbito(string a) {
	ambiti.push_back(a);
}

vector<string> Ricercatore::getAmbiti() const{
	return ambiti;
}

string Ricercatore::summary() {
	string sep = ",";
	string result = Persona::summary();
	for (auto a : ambiti) {
		result = result + sep + a;
	}
	return result;
}



Ricercatore::~Ricercatore()
{
    //dtor
}
