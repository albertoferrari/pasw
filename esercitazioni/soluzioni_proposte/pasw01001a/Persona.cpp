#include <iostream>
#include "Persona.h"

Persona::Persona(string nome, string cognome, string matricola): n(nome), c(cognome), m(matricola) {}

string Persona::getName() const {
	return n;
}

string Persona::getFamilyName() const {
	return c;
}

string Persona::getMatricola() const{
	return m;
}

string Persona::summary() {
	string sep = ",";
	return getName() + sep + getFamilyName() + sep + getMatricola();
}

Persona::~Persona() {}
