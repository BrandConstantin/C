/* Operadores de incremento */
#include <iostream>

int main(){
	int x = 3, y = 3, z = 3;
	int a = 3, b = 3, c = 3;
	
	++x; // incremento prefijo
	x++; // incremento posfijo
	--a;
	a--;
	
	std::cout << x << std::endl;
	std::cout << y++ * 3 << std::endl;
	std::cout << ++z * 3 << std::endl;
	std::cout << y << std::endl;
	std::cout << z << std::endl;
	
	std::cout << "----------------------" << std::endl;
	
	std::cout << a << std::endl;
	std::cout << b-- * 3 << std::endl;
	std::cout << --c * 3 << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	
	return 0;
}
