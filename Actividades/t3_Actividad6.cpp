/*
Leer por teclado un n�mero entero por teclado y que diga si es par o impar
Luego leer 2 n�meros m y n y deber� determinar si el primero es divisible por el segundo (el resto de la divisi�n deber ser cero
*/

#include <iostream>
using namespace std;

int main(){
	int x, m, n;
	
	// primera parte
	cout << "Indroduzca un n�mero: ";
	cin >> x;
	
	if(x % 2 == 0){
		cout << "N�mero par" << endl;
	}else{
		cout << "N�mero impar" << endl;
	}
	
	cout << "\n-------------------------------------\n";
	
	// segunda parte
	cout << "Indroduzca otros dos numeros: ";
	cin >> m >> n;
	
	if(n != 0){
		if((m % n == 0) && (n != 0)){
			cout << "N�mero divisible ";
		}else{
			cout << "N�mero no divisible";
		}
	}else{
		cout << "Para un buen resultado no divida por zero";
	}
	
	
	return 0;
}
