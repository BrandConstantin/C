/* Proyecto 4: Lectura de entrada de datos*/

// importar librer�a principal de E/S
#include <iostream>

// Para evitar declaraciones individuales de E/S
using namespace std;

// Declaramos la funci�n principal
int main(){
	int numero,suma=0; 

	do{
    	cout << "Escribe un n�mero: "; cin >> numero; 
      
      	if(numero > 0){
      		suma += numero;
      	}
    }while(numero != 0);
    
    cout<< "\nLa suma es: " << suma << endl;

	// Buena pr�ctica en funci�nes enteras
	return 0;
}
