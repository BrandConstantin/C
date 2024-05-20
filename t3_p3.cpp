/* Proyecto 3: Operadores de asignación */

// importar librería principal de E/S
#include <iostream>

// Para evitar declaraciones individuales de E/S
using namespace std;

// Declaramos la función principal
int main(){
	// Declaración de variables
	int x;
	double d = 3.5;
	
	cout << x << ' ' << d << endl;
	x = 8;
	cout << x << ' ' << d << endl;
	
	double a = x * d;
	double b = x / d;
	double c = x + d;
	double f = x - d;
	
	// Añadir multiplicación, división, etc
	cout << x << "*" << d << "=" << a << endl;
	cout << x << "/" << d << "=" << b  << endl;
	cout << x << "+" << d << "=" << c << endl;
	cout << x << "-" << d << "=" << f << endl;
	
	// Buena práctica en funciónes enteras
	return 0;
}
