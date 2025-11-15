/*
Author: Kyb3r Cipher
Grade: 2A Programacion TM - CBTIS 89
Date: 04/04/2022

Hacer un programa que solicite cinco calificaciones por medio de un ciclo e imprima el promedio de las mismas
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float calificacion, suma = 0;
	int i = 1;
	while (i <= 5) {
		cout << "Dime la calificacion " << i << ": ";
		cin >> calificacion;
		suma += calificacion;
		i++;
	}
	cout << "El promedio de las calificaciones es: " << (suma / 5) << endl;
	
	return 0;
}
