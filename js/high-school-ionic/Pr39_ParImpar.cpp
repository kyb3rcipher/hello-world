/*
Author: Kyb3r Cipher
Grade: 2A Programacion TM - CBTIS 89
Date: 04/04/2022

Por medio de un ciclo, solicitar el nombre y la edad de una persona y le indique si es mayor o menor de edad, 
la permanencia del ciclo sera mientras el usuario responda afirmativamente a una pregunta.
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string nombre;
	int edad;
	char respuesta;
	
	do {
		cout << "Ingrese su nombre: ";
		cin >> nombre;
		cout << "Ingrese su edad: ";
		cin >> edad;
		
		cout << "\n";
		
		if (edad >= 18) {
			cout << nombre << " es mayor de edad." << endl;
		} else {
			cout << nombre << " es menor de edad." << endl;
		}
		
		cout << "Desea continuar? (S/N): ";
		cin >> respuesta;
	} while (respuesta == 'S' || respuesta == 's');

	return 0;
}

