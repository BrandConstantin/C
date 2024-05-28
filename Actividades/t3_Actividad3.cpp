/*
La calificación de los estudiantes se obtiene como el promedio de tres notas: la nota de prácticas, que cuenta un 25% del total; 
la nota del examen teórico, que cuenta un 60% y la nota de participación, que cuenta el 15% restante.

Desarrolla un programa en C++ que lea las tres notas del alumno y escriba su nota final.
*/

#include <iostream>
int main(){
    float notaPracticas, notaTeoria, notaParticipacion, notaFinal;
    // notaPracticas 25% 
    // notaTeoria 60%
    // notaParticipacion 15%

    std::cout << "Introduce la nota de práctica: "; 
    std::cin >> notaPracticas;
    std::cout << "Introduce la nota de la teoria: "; 
    std::cin >> notaTeoria;
    std::cout << "Introduce la nota de participación: "; 
    std::cin >> notaParticipacion;
    
    if((notaPracticas <= 10 || notaPracticas >= 0) && 
		(notaTeoria <= 10 || notaTeoria >= 0) && 
		(notaParticipacion <= 10 || notaParticipacion >= 0)){
		notaFinal = (notaPracticas * 0.25) + (notaTeoria * 0.6) + (notaParticipacion * 0.15);		
	}else{
		std::cout<< "\Imposible calcular la nota! " << std::endl;
	}


    std::cout<< "\nLa nota final es: " << notaFinal << std::endl;

    return 0;
}
