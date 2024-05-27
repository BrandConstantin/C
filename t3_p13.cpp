/* Expresiones aritméticas - operadores lógicos */
#include <iostream>
using namespace std;

int main(){
	int x, y;
	bool encontrado;
	
	std::cout << "Introduzca dos números enteros: " << std::endl;
	std::cin >> x >> y;
	
	if(x != y){
		std::cout << "Los valores son distintos\n";
	}else{
		encontrado = true;
		std::cout << "Los valores son iguales\n";
	}
	
	if(!encontrado){
		std::cout << "............................\n";
	}
	
	return 0;
}
