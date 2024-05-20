/* Actividad 2 en clase */
/*
Monta un sistema en c++ que pida por teclado 5 estaturas en float, 5 edades en int y 5 sexos en char.
Los valores deberán ser recogidos en una sola línea de comando.
*/

/*
El sistema deberá arrojar desúes de la estatura media, la edad media y desglose de los 5 sexos que se han introducido
*/
// importar librería principal de E/S
#include <iostream>

// Para evitar declaraciones individuales de E/S
using namespace std;

int main(){
	float estatura1, estatura2, estatura3, estatura4, estatura5;
	int edad1, edad2, edad3, edad4, edad5;
	char sexo1, sexo2, sexo3, sexo4, sexo5;
	
	
	cout << "Introduce las estaturas: "; 
	cin >> estatura1 >> estatura2 >> estatura3 >> estatura4 >> estatura5;
	cout << "Introduce las edades: "; 
	cin >> edad1 >> edad2 >> edad3 >> edad4 >> edad5;
	cout << "Introduce los sexos: "; 
	cin >> sexo1 >> sexo2 >> sexo3 >> sexo4 >> sexo5;
	
	cout << "La media de las estaturas es: " << (estatura1 + estatura2 + estatura3 + estatura4 + estatura5) / 5 << endl;
	cout << "La media de las edades es: " << (edad1 + edad2 + edad3 + edad4 + edad5) / 5 << endl;
	cout << "Los sexos son: " << sexo1 << "-" << sexo2 << "-" << sexo3 << "-" << sexo4 << "-" << sexo5 << endl;
}
