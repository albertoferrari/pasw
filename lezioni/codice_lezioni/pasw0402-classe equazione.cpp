#include <iostream>
#include <cmath>
#include <limits>
#include <string>

using namespace std;

class Equazione {
public:
	// default a,b,c = 1;
	Equazione() { a=1; b=1; c=1; }

	Equazione(double c_a, double c_b, double c_c){
		a=c_a; b=c_b; c=c_c;   
	}
    
	double getA() { return a; }
	void setA(double v) { a=v; }
	double getB() { return b; }
	void setB(double v) { b=v; }
	double getC() { return c; }
	void setC(double v) { c=v; }
	
	//  numero di soluzioni reali
	int numSolReali()	{
		if (a==0 && b!=0) return 1;
		if (a==0 && b==0) return 0;
		if (delta()<0)    return 0;
		if (delta()==0)   return 1;
		return 2;
	}
	
	double soluzione1() {
		if (a==0 && b!=0) return (-c/b);
		if (delta()>=0)	return ((-b-sqrt(delta()))/a);
		return std::numeric_limits<double>::min();
	}

	double soluzione2() {
		if (a==0 && b!=0) return (-c/b);
		if (delta()>=0)	return ((-b+sqrt(delta()))/a);
		return std::numeric_limits<double>::max();
	}
	
	string toString() {
		string s = "";
		if (a!=0) s += to_string(a) + "x^2 ";
		if (b>0) s += "+" + to_string(b) + "x ";
		if (b<0) s += to_string(b) + "x ";
		if (c>0) s += "+" + to_string(c);
		if (c<0) s += to_string(c);
		s += " = 0";
		return s;
	}

private:
	double a;
	double b;
	double c;
	double delta() { return pow(b,2)-4*a*c; }
};

int main() {
    Equazione e(3,4,1);
    cout << e.toString() << endl;
    switch (e.numSolReali()) {
		case 2:
			cout << "soluzione 2 = " << e.soluzione2() << endl;
		case 1:
			cout << "soluzione 1 = " << e.soluzione1() << endl; 
			break;
		case 0:
			cout << "nessuna soluzione reale"; 
	}
    return 0;
} 
