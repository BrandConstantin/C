/* Proyecto 2: Definici�n de variables */

/*
Pseudoc�digo en c/c++
entero - int
real - float y double
car�cter - char
l�gico - boolean
*/

// importar librer�a principal de E/S
#include <iostream>
#include <limits>

// Para evitar declaraciones individuales de E/S
using namespace std;

// Declaramos la funci�n principal
int main(){
	// Salida de datos por pantalla
	cout << "N�mero m�ximo entero: " << numeric_limits<int>::max () << endl;
	cout << "N�mero m�nimo entero: " << numeric_limits<int>::min () << endl;
	
	// float
	cout << "N�mero float: " << numeric_limits<float>::min () << endl;
	// double
	cout << "N�mero double: " << numeric_limits<double>::min () << endl;
	// long int
	cout << "N�mero long: " << numeric_limits<long int>::min () << endl;
	// char
	cout << "Char: " << numeric_limits<char>::min () << endl;
	// bool
	cout << "Boolean: " << numeric_limits<bool>::min () << endl;
	
	// Buena pr�ctica en funci�nes enteras
	return 0;
}
