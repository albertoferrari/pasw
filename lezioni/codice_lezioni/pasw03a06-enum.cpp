#include <iostream>

using namespace std;

int main() {
	enum {Lu,Ma,Me,Gi,Ve,Sa,Do} giorno;
	giorno = Me;
	cout << giorno << endl;
	
	typedef enum {Gen,Feb,Mar,Apr,Mag,Giu,Lug,Ago,Set,Ott,Nov,Dic} Mese;
	Mese meseCorrente;
	meseCorrente = Ago;
	switch(meseCorrente) {
		case Giu :
		case Lug : 
		case Ago : cout << "estate";   break;
		case Set :
		case Ott : 
		case Nov : cout << "autunno";   break;
		case Dic :
		case Gen : 
		case Feb : cout << "inverno";   break;	
		default  : cout << "primavera";	
	}

    return 0;
}
