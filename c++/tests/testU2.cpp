/*
Examen 2
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string tipoImpresion;
	int numeroTabla, cantidadNumeros;
	cout << "Tipo de impresion?: ";
	cin >> tipoImpresion;
	cout << "Numero de tabla?: "; 	
	cin >> numeroTabla;
	cout << "Cantidad de numeros?: ";
	cin >> cantidadNumeros;
	
	
	if (tipoImpresion == "Normal") {
		for (int i = 1; i <= cantidadNumeros; i++) {
			cout << numeroTabla << " x " << i << " = " << numeroTabla * i << endl;
		}
	} else if (tipoImpresion == "Inversa") {
		for (int i = cantidadNumeros; i >= 1; i--) {
			cout << numeroTabla << " x " << i << " = " << numeroTabla * i << endl;
		}
	} else {
		cout << "El tipo de impresion es invalido vuelve a intentar (Normal/Inversa)" << endl;
		return 1;
	}
	
	return 0;
}

