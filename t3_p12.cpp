/* Expresiones lógicas y operadores relacionales */ 
#include <iostream>
using namespace std;

int main(){
	int x, y;
	
	do{
		cout << "Indroduzca dos numeros naturales: ";
		cin >> x >> y;
		
		if(x > y){
			cout << "El primer número es mayor al segundo \n" << endl;
		}else{
			if(x < y ){
				cout << "El segundo número es mayor al primero!\n" << endl;
			}else{			
				cout << "Los numeros son iguales!\n";
			}
		}
		
	}while(x > -1 && y > -1);
	
	return 0;
}
