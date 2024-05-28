/*
Casting
*/

#include<iostream>

int main(){
	int x = 32;
	
	std::cout << x / 2 << ' ' << (float) x / 2 << std::endl;
	std::cout << float(x) / 2 << std::endl;
	std::cout << x; // x sigue siento entero después del casting
	return 0;
}
