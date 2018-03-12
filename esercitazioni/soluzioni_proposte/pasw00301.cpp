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

// converte in formato Cella un pezzo p rappresentato come char
Cella convertiInCella(char p);

// converte in char un pezzo p rappresentato in formato Cella
char convertiInChar(Cella p);

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
	// riga e colonna corrispondenti al carattere i-esimo della stringa
	int r,c;	
	for(int i=0;i<64;i++) {	// per ogni carattere della stringa
		r = i / 8;
		c = i % 8;
		// inserimento pezzi corrispondenti in scacchiera
		s[r][c] = convertiInCella(sitIniziale[i]);
	}
}

// visualizza la scacchiera (formato di visualizzazione a scelta)
void visualizzaScacchiera(Scacchiera s){
	for(int r=0;r<8;r++) {
		cout << "-----------------" << endl;
		for(int c=0;c<8;c++)
			cout << "|" << convertiInChar(s[r][c]);
		cout << "|" << endl;	
	}
	cout << "-----------------" << endl;
}

// converte in formato Cella un pezzo p rappresentato come char
Cella convertiInCella(char p){	
	Cella pc;
	switch (p) {
		case ' ':
			pc.pezzo = noPiece; pc.colore = noColor; break;
		case 'p':
			pc.pezzo = pawn; pc.colore = white; break;	
		case 'r':
			pc.pezzo = rook; pc.colore = white; break;
		case 'b':
			pc.pezzo = bishop; pc.colore = white; break;	
		case 'n':
			pc.pezzo = knight; pc.colore = white; break;	
		case 'q':
			pc.pezzo = queen; pc.colore = white; break;
		case 'k':
			pc.pezzo = king; pc.colore = white; break;	
		case 'P':
			pc.pezzo = pawn; pc.colore = black; break;	
		case 'R':
			pc.pezzo = rook; pc.colore = black; break;
		case 'B':
			pc.pezzo = bishop; pc.colore = black; break;	
		case 'N':
			pc.pezzo = knight; pc.colore = black; break;	
		case 'Q':
			pc.pezzo = queen; pc.colore = black; break;
		case 'K':
			pc.pezzo = king; pc.colore = black; break;					
	}
	return pc;
}

// converte in char un pezzo p rappresentato in formato Cella
char convertiInChar(Cella p){
typedef enum {pawn,rook,bishop,knight,queen,king,noPiece} Pezzo;
	string pChar = "prbnqk PRBNQK ";	// caratteri dei pezzi
	int pCharPos = p.pezzo;
	if (p.colore == black) pCharPos+=7;	// pezzi neri
	return pChar[pCharPos];
}
