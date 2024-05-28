/*
Supongamos que el recibo de la luz sube un 2% cada año (y digo "supongamos" porque menudo sablazo nos meten). Pues bien, se nos 
pide realizar un programa que en C++ que solicite una factura de este año en curso (su valor en €) y una cantidad de años y 
muestre en la salida cuál sería el valor de esa misma factura dentro del numero de años introducidos.

Ejemplo: : Factura: 100 euros. Numero de años: 3

Salida: : Factura: 109.273 euros
*/

#include <iostream>
#include <cmath> // Para usar la función pow()

int main(){
    float facturaAnioCurso, facturaFutura, temp;
    int numeroAnios;
    const double incrementoAnual = 0.02; // Incremento del 2% anual

    std::cout << "Introduce la factura del año en curso: "; 
    std::cin >> facturaAnioCurso;
    std::cout << "Introduce número de años a calcular el gráfico: "; 
    std::cin >> numeroAnios;
    
    if(facturaAnioCurso > 0 && numeroAnios > 0){
		facturaFutura += facturaAnioCurso * pow(1 + incrementoAnual, numeroAnios);
		
		std::cout<< "\nLa nota final es: " << facturaFutura << std::endl;
		
		return 0;
	}else{
		std::cout<< "\Imposible calcular! " << std::endl;
	}

    return 0;
}
