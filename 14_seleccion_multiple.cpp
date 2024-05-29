/* Selección Múltiple con switch*/

#include <iostream>

int main(){
	int x;
	
	std::cout << "Introduce un valor entero de 1 a 5: ";
	std::cin >> x;
	
	switch(x){
		case 1: std::cout << "Mensaje 1\n"; break;
		case 2: std::cout << "Mensaje 2\n"; break;
		case 3: std::cout << "Mensaje 3\n"; break;
		case 4: std::cout << "Mensaje 4\n"; break;
		case 5: std::cout << "Mensaje 5\n"; break;
		default: std::cout << "Valor por defecto\n"; break;
	}
	
	return 0;
}
