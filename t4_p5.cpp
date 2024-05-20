/* Proyecto 4: Lectura de entrada de datos*/

// importar librería principal de E/S
#include <iostream>

// Para evitar declaraciones individuales de E/S
using namespace std;

// Declaramos la función principal
int main(){
	int numero,suma=0; 

	do{
    	cout << "Escribe un número: "; cin >> numero; 
      
      	if(numero > 0){
      		suma += numero;
      	}
    }while(numero != 0);
    
    cout<< "\nLa suma es: " << suma << endl;

	// Buena práctica en funciónes enteras
	return 0;
}
