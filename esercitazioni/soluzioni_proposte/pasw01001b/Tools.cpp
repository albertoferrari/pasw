#include "Persona.h"
#include <string>

ostream& operator<<(ostream& os, Persona& p) {
	string sep = " ";
	os << p.getName() << sep << p.getFamilyName() << sep << "[" + p.getMatricola() + "]";
	return os;
}

