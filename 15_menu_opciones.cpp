/* Men� con switch*/

#include <iostream>
using namespace std;

int main(){
	double x, y;
	
	cout << "Introduce dos valores reales: ";
	cin >> x >> y;
	
	cout << "Opciones: \n";
	cout << "1: Sumar | 2: Restar | 3: Multiplicar | 4: Divisi�n \n";
	
	char option;
	cout << "Cual es la opci�n escogida? ";
	cin >> option;
	
	switch(option){
		case '1': cout << "La suma es: " << x + y << endl; break;
		case '2': cout << "La resta es: " << x - y << endl; break;
		case '3': cout << "La multiplicaci�n es: " << x * y << endl; break;
		case '4': 
				if(y != 0){
					cout << "El resto es: " << x / y << endl;
				}else{
					cout << "No se puede dividir con zero" << endl;
				}			
			break;
			
		default: cout << "Ninguna opci�n valida" << endl; break;
	}
	
	return 0;
}
