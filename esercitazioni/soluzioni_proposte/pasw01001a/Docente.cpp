#include "Docente.h"

Docente::Docente(string cognome, string nome, string matricola) : Persona(cognome, nome, matricola) {}

void Docente::addCorso(Corso c) {
	corsi.push_back(c);
}

vector<Corso> Docente::getCorsi() const{
	return corsi;
}

string Docente::summary()  {
	string sep = ",";
	string result = Persona::summary();
	for (auto c : getCorsi()) {
		result = result + sep + to_string(c.idcorso) + sep + c.nome + sep + c.settore;
	}
	return result;
}



Docente::~Docente()
{
    //dtor
}
