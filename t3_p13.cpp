/* Expresiones aritm�ticas - operadores l�gicos */
#include <iostream>
using namespace std;

int main(){
	int x, y;
	bool encontrado;
	
	std::cout << "Introduzca dos n�meros enteros: " << std::endl;
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
