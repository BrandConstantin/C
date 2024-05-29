/*
Leer por teclado un número entero por teclado y que diga si es par o impar
Luego leer 2 números m y n y deberá determinar si el primero es divisible por el segundo (el resto de la división deber ser cero
*/

#include <iostream>
using namespace std;

int main(){
	int x, m, n;
	
	// primera parte
	cout << "Indroduzca un número: ";
	cin >> x;
	
	if(x % 2 == 0){
		cout << "Número par" << endl;
	}else{
		cout << "Número impar" << endl;
	}
	
	cout << "\n-------------------------------------\n";
	
	// segunda parte
	cout << "Indroduzca otros dos numeros: ";
	cin >> m >> n;
	
	if(n != 0){
		if((m % n == 0) && (n != 0)){
			cout << "Número divisible ";
		}else{
			cout << "Número no divisible";
		}
	}else{
		cout << "Para un buen resultado no divida por zero";
	}
	
	
	return 0;
}
