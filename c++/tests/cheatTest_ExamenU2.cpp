#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int limiteInferior = 1, limiteSuperior = 0;
	int numero = 1;
	int cantidadInferior = 0, sumaInferior = 0, promedioInferior;
	int cantidadFuera = 0, sumaFuera = 0, promedioFuera;
	int igualSuperior = 0, igualInferior = 0;
	
	while (limiteInferior > limiteSuperior) {
		cout << "Dime el limite inferior: ";
		cin >> limiteInferior;
		cout << "Dime el limite superior: ";
		cin >> limiteSuperior;
	}
	
	while (numero != 0) {
		cout << "Dime el numero: ";
		cin >> numero;
		
		if (numero >= limiteInferior and numero <= limiteSuperior) {
			cantidadInferior++;
			sumaInferior += numero;
			promedioInferior = sumaInferior / cantidadInferior;
		} else {
			cantidadFuera++;
			sumaFuera += numero;
			promedioFuera = sumaFuera / cantidadFuera;
		}
		
		if (numero == limiteSuperior) {
			igualSuperior++;
		}
		
		if (numero == limiteInferior) {
			igualInferior++;
		}
	}
	
	cout << "La cantidad de numeros es de: " << cantidadInferior << endl;
	cout << "La suma de numeros es de: " << sumaInferior << endl;
	cout << "La promedio de numeros es de: " << promedioInferior << endl;
	
	cout << "La cantidad de numeros es de: " << cantidadFuera << endl;
	cout << "La suma de numeros es de: " << sumaFuera << endl;
	cout << "La promedio de numeros es de: " << promedioFuera << endl;
	
	cout << "Cantidad igual inferior" << igualInferior << endl;
	cout << "Cantidad igual superior" << igualSuperior << endl;
	return 0;
}

