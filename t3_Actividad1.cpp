/* Actividad 1 en clase */
/*
Desarrolla un programa en c++ que lea la entrada de un precio de un producto en base imponible y muestre la salida con iva incluido
*/

/*
Resultado en pantalla: Introduce el precio neto del articulo en euros
Ej: 120 €
Salida por pantalla: El precio IVA includio es de 145.20€
*/

// importar librería principal de E/S
#include <iostream>

// Para evitar declaraciones individuales de E/S
using namespace std;
const float iva = 0.21;

// Declaramos la función principal
int main(){
	double precio;

	cout << "Introduce el precio neto del articulos en euros: "; 
	cin >> precio;
	
	float precioMasIva = precio * iva;
	float total = precio + precioMasIva;
	
	
	cout << "El precio IVA includio es de: " << total << endl;

	// Buena práctica en funciónes enteras
	return 0;
}
