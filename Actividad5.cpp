/* Actividad 5 */
/* 
Se debe pedir un número real i un caracter c y un segundo número real j
En función del carácter introducido el programa mostrara como salida:
i+j si c es +
i-j si c es -
i*j si c es *
i/j si c es /
Error en caso de que C es cualquier otra cosa
*/

#include <iostream>
using namespace std;

int main(){
	bool otraVez;
	int x, y;
	char c;
	
	do{
		cout << "Indroduzca dos numeros reales: ";
		cin >> x >> y;
		cout << "Introduzca que quieres hacer con los números ('*','/','+','-',)\n";
		cin >> c;
		
		if(c == '*' || c == '/' || c == '+' || c == '-'){
			if(c == '*'){
				cout << x << "*" << y << "=" << x * y << endl;
			}else if(c == '-'){
				cout << x << "-" << y << "=" << x - y << endl;
			}else if(c == '+'){
				cout << x << "+" << y << "=" << x + y << endl;
			}else{
				if(y != 0){
					cout << x << "-" << y << "=" << x - y << endl;
				}else{
					cout << "No se puede dividir con zero" << endl;
				}				
			}
			
			otraVez = true;
		}else{			
			cout << "Caracter no permitido!\n ";
		}
	}while(otraVez);
	
	return 0;
}
