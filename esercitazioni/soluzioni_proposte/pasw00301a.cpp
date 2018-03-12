/*
 * pasw00301a.cpp
 * Si definisca la struttura del tipo di dato Punto2d 
 * e la struttura del tipo di dato Punto3d che rappresentano 
 * rispettivamente punti sul piano e nello spazio tridimensionale. 
 * Si scriva un programma che (facendo uso di funzioni) 
 * permetta di ricevere in input le coordinate di punti sul piano 
 * e di punti nello spazio poi per ogni coppia di punti 
 * visualizzi la distanza.
 */

#include <iostream>
#include <cmath>

using namespace std;

// punto nel piano
struct Punto2d {
	int x;
	int y;
};

// punto nello spazio
struct Punto3d {
	int x;
	int y;
	int z;
};

// return distanza fra due punti nel piano
double distanza(Punto2d, Punto2d);

// return distanza fra due punti nello spazio
double distanza(Punto3d, Punto3d);


int main() {
	Punto2d p2d1,p2d2;
	Punto3d p3d1,p3d2;
	int numCoppiePunti;
	cout << "numero di coppie di punti: ";
	cin >> numCoppiePunti;
	cout << "coppie di punti 2d" << endl;
	for(int c=0;c<numCoppiePunti;c++) {
		cout << "coppia " << c << endl;
		cout << "coordinate primo punto: ";
		cin >> p2d1.x >> p2d1.y;
		cout << "coordinate secondo punto: ";
		cin >> p2d2.x >> p2d2.y;
		cout << "distanza " << distanza(p2d1,p2d2) << endl;
	} 
	cout << "coppie di punti 3d" << endl;
	for(int c=0;c<numCoppiePunti;c++) {
		cout << "coppia " << c << endl;
		cout << "coordinate primo punto: ";
		cin >> p3d1.x >> p3d1.y >> p3d1.z;
		cout << "coordinate secondo punto: ";
		cin >> p3d2.x >> p3d2.y >> p3d2.z;
		cout << "distanza " << distanza(p3d1,p3d2) << endl;
	} 	
	return 0;
}

// return distanza fra due punti nel piano
double distanza(Punto2d a, Punto2d b){
	return sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2));
}

// return distanza fra due punti nello spazio
double distanza(Punto3d a, Punto3d b){
	return sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2)+pow((a.z-b.z),2));
};
