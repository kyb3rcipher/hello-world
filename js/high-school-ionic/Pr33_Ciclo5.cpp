/*
Author: Kyb3r Cipher
Grade: 2A Programacion TM - CBTIS 89
Date: 04/04/2022

Hacer un programa que solicite el nombre del usuario y por medio de un ciclo sus tres calificaciones. Obtenga el promedio y al final indicar si aprobo o reprobo.
Ejemplo: Juan tu promedio es de 5.3 por lo tanto REPROBASTE
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string nombre;
	int j = 1;
	float calificacion, suma = 0, promedio = 0;
	
	cout << "Cual es tu nombre?: ";
	cin >> nombre;
	
	cout << "\n";
	while (j <= 3) {
		cout << nombre << " dime tu calificacion " << j << ": ";
		cin >> calificacion;
		suma += calificacion;
		j++;
	}
	
	cout << "\n";
	promedio = suma / 3;
	cout << nombre << " tu promedio es de " << promedio << " por lo tanto ";
	if (promedio >= 6) {
		cout << "APROVASTE";
	} else {
		cout << "REPROBASTE";
	}
	return 0;
}
