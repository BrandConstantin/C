/* Llamadas a funciones */
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x, r;
	cout << "Introduce un número (se admiten decimales): ";
	cin >> x;
	
	r = pow(x, 3) + 4;
	
	cout << "x ^ 3 + 4 = " << r << endl;
	cout << "Su raíz cuadrada es " << sqrt(x) << endl;
	
	return 0;
}
