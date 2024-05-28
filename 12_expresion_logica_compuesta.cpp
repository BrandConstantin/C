/* Expresión lógica compuesta */
#include <iostream>
using namespace std;

int main(){
	double nota;
	
	cout << "Introduzca la nota del examen: ";
	cin >> nota;
	
	if(nota < 0 || nota > 10){
		cout << "Nota introducida no válida\n";
	}else{
		if(nota < 5.0){
			cout << "Estas suspenso\n";
		}else if(nota >= 5.0 && nota <= 6.0){
			cout << "Aceptable\n";
		}else if(nota > 6.0 && nota <= 7.0){
			cout << "Bien\n";
		}else if(nota > 7.0 && nota <= 8.0){
			cout << "Muy bien\n";
		}else if(nota > 8.0 && nota <= 9.0){
			cout << "Notable\n";
		}else {
			cout << "Sobresaliente\n";
		}
	}
}
