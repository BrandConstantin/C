/*
Supongamos que el recibo de la luz sube un 2% cada a�o (y digo "supongamos" porque menudo sablazo nos meten). Pues bien, se nos 
pide realizar un programa que en C++ que solicite una factura de este a�o en curso (su valor en �) y una cantidad de a�os y 
muestre en la salida cu�l ser�a el valor de esa misma factura dentro del numero de a�os introducidos.

Ejemplo: : Factura: 100 euros. Numero de a�os: 3

Salida: : Factura: 109.273 euros
*/

#include <iostream>
#include <cmath> // Para usar la funci�n pow()

int main(){
    float facturaAnioCurso, facturaFutura, temp;
    int numeroAnios;
    const double incrementoAnual = 0.02; // Incremento del 2% anual

    std::cout << "Introduce la factura del a�o en curso: "; 
    std::cin >> facturaAnioCurso;
    std::cout << "Introduce n�mero de a�os a calcular el gr�fico: "; 
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
