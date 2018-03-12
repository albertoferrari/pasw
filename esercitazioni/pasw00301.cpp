/*
 * pasw00301.cpp
 * chess - struct - enum - string
 * ref: https://en.wikipedia.org/wiki/Chess
 */

#include <iostream>
#include <string>

using namespace std;

typedef enum {pawn,rook,bishop,knight,queen,king,noPiece} Pezzo;

typedef enum {white,black,noColor} Colore;

struct Cella {
	Pezzo pezzo;
	Colore colore;
};

typedef Cella Scacchiera[8][8];

// inserisce celle vuote in tutta la scacchiera
void vuotaScacchiera(Scacchiera s);	

// inserisce i vari pezzi nella scacchiera
void inserisciPezzi(Scacchiera s);

// visualizza la scacchiera (formato di visualizzazione e a scelta)
void visualizzaScacchiera(Scacchiera s);

int main() {
	Scacchiera s;
	vuotaScacchiera(s);
	inserisciPezzi(s);
	visualizzaScacchiera(s);
	// inserimento coordinate cella (formato scacchistico es. b,1)
	// se si tratta di un alfiere bianco o nero visualizza tutte le sue
	//                               possibili mosse
	// se si tratta di una torre bianca o nera visulizza tutte le sue
	//								 possibili mosse
	return 0;
}

// inserisce celle vuote in tutta la scacchiera
void vuotaScacchiera(Scacchiera s){
	Cella vuota;
	vuota.pezzo = noPiece;
	vuota.colore = noColor;
	for(int r=0; r<8; r++)
		for(int c=0; c<8; c++)
			s[r][c] = vuota;
}

// inserisce i vari pezzi nella scacchiera
void inserisciPezzi(Scacchiera s){
	// per il momento la situazione di partenza
	// e' definita mediante una stringa di 64 caratteri
	//  la codifica dei pezzi bianchi e' la seguente:
	// Pedone 	p
	// Torre	r
	// Cavallo	n
	// Alfiere	b
	// Regina	q
	// Re		k
	// per i pezzi neri stessi caratteri ma maiuscoli
	string sitIniziale;
	sitIniziale  = " b      ";
	sitIniziale += "  nq    ";
	sitIniziale += "p     P ";	
	sitIniziale += "kr  pPp ";	
	sitIniziale += "  B QK  ";	
	sitIniziale += "     prp";	
	sitIniziale += " P p n p";	
	sitIniziale += " b      ";	
	// recupero dei caratteri dalla stringa
	// e inserimento pezzi corrispondenti in scacchiera
}

// visualizza la scacchiera (formato di visualizzazione a scelta)
void visualizzaScacchiera(Scacchiera s){
}
