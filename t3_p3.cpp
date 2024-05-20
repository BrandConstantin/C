/* Proyecto 3: Operadores de asignaci�n */

// importar librer�a principal de E/S
#include <iostream>

// Para evitar declaraciones individuales de E/S
using namespace std;

// Declaramos la funci�n principal
int main(){
	// Declaraci�n de variables
	int x;
	double d = 3.5;
	
	cout << x << ' ' << d << endl;
	x = 8;
	cout << x << ' ' << d << endl;
	
	double a = x * d;
	double b = x / d;
	double c = x + d;
	double f = x - d;
	
	// A�adir multiplicaci�n, divisi�n, etc
	cout << x << "*" << d << "=" << a << endl;
	cout << x << "/" << d << "=" << b  << endl;
	cout << x << "+" << d << "=" << c << endl;
	cout << x << "-" << d << "=" << f << endl;
	
	// Buena pr�ctica en funci�nes enteras
	return 0;
}
