#include "Dipartimento.h"
#include <fstream>
#include <algorithm>

using namespace std;

Dipartimento::Dipartimento(string nome) {this->nome = nome;}

void Dipartimento::addPersona(Persona* p) {
	gruppo.insert(p);
}

set<Persona*, PersonaPtrComp> Dipartimento::getGruppo() const {
	return gruppo;
}

string Dipartimento::getName() {
	return nome;
}

void Dipartimento::saveToFile() {
	ofstream output;
	string file = getName() + ".txt";
	output.open(file.c_str(), ios::out);
	for (auto *p : getGruppo()) {
		output << p->summary() << endl;
	}
	output.close();
}

Dipartimento::~Dipartimento() {}
