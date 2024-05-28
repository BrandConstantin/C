/* Proyecto 4: Lectura de entrada de datos*/

// importar librería principal de E/S
#include <iostream>

// Para evitar declaraciones individuales de E/S
using namespace std;

// Declaramos la función principal
int main(){
	int num1, num2;
	
	cout << "Introduce un número entero: "; 
	cin >> num1;
	cout << "Introduce un segundo entero: "; 
	cin >> num2;
	cout << "La suma de los números es: " << num1 + num2 << endl;
	
	// Buena práctica en funciónes enteras
	return 0;
}
