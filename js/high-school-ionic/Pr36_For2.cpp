/*
Author: Kyb3r Cipher
Grade: 2A Programacion TM - CBTIS 89
Date: 04/04/2022

Por medio de un ciclo for imprimir los numeros NONES del 11 al 99 y al final
mostrar la suma y el promedio de ellos.
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int suma = 0, contador = 0;
	
	for (int i = 11; i <= 99; i += 2) {
		cout << i << " ";
		suma += i;
		contador++;
	}
	
	//float promedio = static_cast<float>(suma) / contador;
	float promedio = suma / (float) contador;
	
	cout << "\nLa suma de los numeros nones es: " << suma << endl;
	cout << "El promedio de los numeros nones es: " << promedio << endl;
	
	return 0;
}

 
