/* Bucles - while */
#include <iostream>
using namespace std;

int main(){
	float valor, suma = 0;
	
	while(valor != 0){
		suma += valor;
		
		if(suma <= 100){
			cout << "Introduce un valor de 2 decimales (para terminar teclea zero): " << endl;
			cin >> valor;
		}else{
			valor = 0;
			cout << "\nSe ha superado el 100\n" << endl;
		}
	}
	
	cout << "\nEl resultado final es: " << suma << endl;
	
	return 0;	
}
