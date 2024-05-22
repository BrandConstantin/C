/* Operadores de incremento */
#include <iostream>

int main(){
	int x = 3, y = 3, z = 3;
	
	++x; // incremento prefijo
	x++; // incremento posfijo
	
	std::cout << x << std::endl;
	std::cout << y++ * 3 << std::endl;
	std::cout << ++z * 3 << std::endl;
	std::cout << y << std::endl;
	std::cout << z << std::endl;
	
	return 0;
}
