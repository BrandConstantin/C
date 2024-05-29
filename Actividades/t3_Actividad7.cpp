/* 
Solicita un numero entero de 1 a 10 y muestra su tabla de multiplicar usando un for
*/

#include <iostream>
using namespace std;

int main(){
	int numero;
	
	cout << "Indroduzca un número para múltiplicar de 1 a 10: ";
	cin >> numero;
	
	if(numero < 1 || numero > 10){
		cout << "Rango de valores no correcto!" << endl;
	}else{
		for(int i = 0; i <= 10; i++){
			cout << numero << " x " << i << " = " << numero * i << endl;
		}
	}
	
	return 0;
}
