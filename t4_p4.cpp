/* Proyecto 4: Lectura de entrada de datos*/

// importar librer�a principal de E/S
#include <iostream>

// Para evitar declaraciones individuales de E/S
using namespace std;

// Declaramos la funci�n principal
int main(){
	int num1, num2;
	
	cout << "Introduce un n�mero entero: "; 
	cin >> num1;
	cout << "Introduce un segundo entero: "; 
	cin >> num2;
	cout << "La suma de los n�meros es: " << num1 + num2 << endl;
	
	// Buena pr�ctica en funci�nes enteras
	return 0;
}
