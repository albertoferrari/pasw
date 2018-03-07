#include <iostream>

using namespace std;

struct Studente {
	string matricola;
	string nome;
	char sesso;
	int voto;
	bool magistrale;
};

// visualizza le informazioni associate a uno studente
void visualizza(Studente s);

int main() {
	Studente s1,s2;
	s1.matricola = "230012"; s1.nome = "Ada Lovelace";
	s1.sesso = 'f'; s1.magistrale = false; s1.voto = 30;
	visualizza(s1);
	s2 = s1;
	s2.voto = 0; s2.magistrale = true;
	visualizza(s2);
    return 0;
}

// visualizza le informazioni associate a uno studente
void visualizza(Studente s){
	if (s.sesso == 'f' || s.sesso == 'F')
		cout << "Studentessa ";
	else
		cout << "Studente ";	
	if (s.magistrale)
		cout << "laurea magistrale ";
	else
		cout << "laurea triennale ";
	cout << "matricola: " << s.matricola << " nome: " << s.nome;	
	if (s.voto > 18)
		cout << " esame superato con voto " << s.voto << endl;
}
