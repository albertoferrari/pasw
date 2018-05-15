#include <iostream>
#include "Tools.h"
#include "Studente.h"
#include "Docente.h"
#include "Ricercatore.h"
#include "Dipartimento.h"

using namespace std;

int main()
{

	Studente s1 = {"Ugo", "Bianchi", "12234", "LIET"};
	cout << s1.summary() << endl;
	cout << "==========" << endl;

	Docente d  {"Giovanni", "Bianchi", "98765"};
	Corso c1 {100, "programmazione di applicazioni software", "ING-INF/05"};
	d.addCorso(c1);
	Corso c2 {101, "intelligenza artificiale", "ING-INF/05"};
	d.addCorso(c2);
    cout << d.summary() << endl;
	cout << "==========" << endl;

	Ricercatore  r {"Giovanni", "Bianchi", "72663"};
	r.addAmbito("AI");
	r.addAmbito("Social Network Analysis");
	r.addAmbito("Sentiment Analysis");
    cout << r.summary() << endl;
    cout << "==========" << endl;

 	Studente s2 = {"Mario", "Neri", "987633", "LISI"};
	cout << s1.summary() << endl;
	cout << "==========" << endl;

	Dipartimento dip {"ING_e_ARCH"};
	cout << dip.getName() << endl;
	dip.addPersona(&s1);
	dip.addPersona(&r);
	dip.addPersona(&d);
	dip.addPersona(&s2);
	cout << "-----------" << endl;
	for (auto elem : dip.getGruppo()) {
		cout << *elem << ":" << elem->summary() << endl;
	}
	cout << "-----------" << endl;

	dip.saveToFile();

    return 0;
}
