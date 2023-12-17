/*
Author: Kyb3r Cipher
Grade: 2A Programacion TM - CBTIS 89
Date: 04/04/2022

Hacer un programa que solicite la edad y genero de 6 personas por medio de un ciclo. Al final debe imprimir:
Cuantas personas son hombre?
Cuantas personas son mujeres?
Cuantas personas son no binarios?

Asi como el promedio de cada genero.
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int edad, hombres = 0, mujeres = 0, no_binarios = 0;
	int suma_hombres = 0, suma_mujeres = 0, suma_no_binarios = 0;
	
	for (int i = 1; i <= 6; i++) {
		char genero;
		
		cout << "Ingrese la edad de la persona " << i << ": ";
		cin >> edad;
		
		cout << "Ingrese el genero de la persona " << i << " (H/M/N): ";
		cin >> genero;
		
		switch(genero) {
		case 'H':
		case 'h':
			hombres++;
			suma_hombres += edad;
			break;
		case 'M':
		case 'm':
			mujeres++;
			suma_mujeres += edad;
			break;
		case 'N':
		case 'n':
			no_binarios++;
			suma_no_binarios += edad;
			break;
		default:
			cout << "Genero invalido. Intente nuevamente." << endl;
			i--;
			break;
		}
	}
	
	cout << "Cantidad de personas por genero:" << endl;
	cout << "Hombres: " << hombres << endl;
	cout << "Mujeres: " << mujeres << endl;
	cout << "No binarios: " << no_binarios << endl;
	cout << endl;
	
	if (hombres > 0) {
		float promedio_hombres = suma_hombres / hombres;
		cout << "Promedio de edad de los hombres: " << promedio_hombres << endl;
	}
	
	if (mujeres > 0) {
		float promedio_mujeres = suma_mujeres / mujeres;
		cout << "Promedio de edad de las mujeres: " << promedio_mujeres << endl;
	}
	
	if (no_binarios > 0) {
		float promedio_no_binarios = suma_no_binarios / no_binarios;
		cout << "Promedio de edad de las personas no binarias: " << promedio_no_binarios << endl;
	}
	
	return 0;
}
