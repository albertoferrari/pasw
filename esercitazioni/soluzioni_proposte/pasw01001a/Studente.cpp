#include "Studente.h"


Studente::Studente(string cognome, string nome, string matricola, string corsolaurea):
    Persona(cognome, nome, matricola) {
	_corsolaurea = corsolaurea;
}

string Studente::getCorsoLaurea() const {
	return _corsolaurea;
}

string Studente::summary(){
	string sep = ",";
	return Persona::summary() + sep + getCorsoLaurea();
}

Studente::~Studente() {}
