/* Proyecto 2: Definición de variables */

/*
Pseudocódigo en c/c++
entero - int
real - float y double
carácter - char
lógico - boolean
*/

// importar librería principal de E/S
#include <iostream>
#include <limits>

// Para evitar declaraciones individuales de E/S
using namespace std;

// Declaramos la función principal
int main(){
	// Salida de datos por pantalla
	cout << "Número máximo entero: " << numeric_limits<int>::max () << endl;
	cout << "Número mínimo entero: " << numeric_limits<int>::min () << endl;
	
	// float
	cout << "Número float: " << numeric_limits<float>::min () << endl;
	// double
	cout << "Número double: " << numeric_limits<double>::min () << endl;
	// long int
	cout << "Número long: " << numeric_limits<long int>::min () << endl;
	// char
	cout << "Char: " << numeric_limits<char>::min () << endl;
	// bool
	cout << "Boolean: " << numeric_limits<bool>::min () << endl;
	
	// Buena práctica en funciónes enteras
	return 0;
}
