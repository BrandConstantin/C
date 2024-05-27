/* Sentencia lógica if */ 
#include <iostream>
using namespace std;

int main(){
	const char VOCAL = 'e';
	char vocal;
	bool acertado;
	
	do{
		cout << "Indroduzca una vocal: ";
		cin >> vocal;
		
		if(vocal == VOCAL){
			acertado = true;
			cout << "Enhorabuen, has acertado\n";
		}else{
			cout << "No es correcto!\n";
		}
		
	}while(acertado);
	
	return 0;
}
