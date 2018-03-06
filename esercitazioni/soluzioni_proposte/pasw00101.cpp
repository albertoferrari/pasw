/*
* (pasw00101.cpp)
* input 3 valori interi che rappresentano giorno, mese e anno
* Verificare che si tratti di una data corretta compresa fra 
* sabato 01/01/1600 e venerdì 31/12/2100 
* visualizzare il giorno della settimana relativo alla data inserita
* author: AF
* version: 1.0
*/
#include <iostream>

using namespace std;

// true se a e' bisestile
bool bisestile(int a);

int main() {
    int giorno,mese,anno;		
    int g_mese[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string g_sett[7] = {"lun","mar","mer","gio","ven","sab","dom"};
    bool dataCorretta = true;
    int g_trascorsi;		// giorni trascorsi dal 01/01/1600
    // input dati
    cout << "inserire giorno mese anno: ";
    cin >> giorno >> mese >> anno;
	// verifica anno
	if (anno < 1600 || anno >2100)
		dataCorretta = false;
	// verifica mese
	if (mese < 1 || mese > 12)
		dataCorretta = false;	
	// se anno bisestile febbraio -> 29 giorni
	if (bisestile(anno))
		g_mese[1] = 29;
	// verifica giorno
	if (giorno < 1 || giorno > g_mese[mese-1])
		dataCorretta = false;
	
	if (dataCorretta) {
		cout << "data corretta " << endl;
		// calcola giorni passati da inizio anno
		g_trascorsi = giorno - 1;
		for (int m=mese-2;m>=0;m--)
			g_trascorsi += g_mese[m];
		cout << "giorni passati da inizio anno " << g_trascorsi << endl;	
		// calcola anni passati e giorni passati da 01/01/1600
		int anni_trascorsi = anno - 1600;
		cout << "anni trascorsi dal 1600 " << anni_trascorsi << endl;
		for (int a=1600; a<anno; a++)
			if (bisestile(a))
				g_trascorsi += 366;
			else
				g_trascorsi += 365;
		cout << "totale giorni trascorsi " << g_trascorsi << endl;		
		int giorno_sett;
		// 01/01/1600 sabato -> indice 5
		giorno_sett = (5 + g_trascorsi % 7) % 7;
		cout << "giorno settimana " << g_sett[giorno_sett] << endl;
	}
	
    return 0;
}

/*
 * true se a e' un anno bisestile
 * Nel calendario gregoriano sono bisestili:
 * gli anni non secolari il cui numero è divisibile per 4;
 * gli anni secolari il cui numero è divisibile per 400. 
 */
bool bisestile(int a){
	if (a%4 != 0)
		return false;
	if (a%400 == 0)
		return true;
	if (a%100 == 0)
		return false;
	return true;	
}
