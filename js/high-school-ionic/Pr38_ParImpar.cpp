/*
Author: Kyb3r Cipher
Grade: 2A Programacion TM - CBTIS 89
Date: 04/04/2022

Utilizando cualquier ciclo, hacer un programa que solicite N numeros por medio de un ciclo,
e indique en cada uno si es PAR o IMPAR
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	int contador = 1;

	cout << "Ingrese la cantidad de numeros: ";
	cin >> n;
	
	while (contador <= n) {
		int numero;
		cout << "Ingrese el numero " << contador << ": ";
		cin >> numero;
		
		if (numero % 2 == 0) {
			cout << numero << " es par" << endl;
		} else {
			cout << numero << " es impar" << endl;
		}
		
		contador++;
	}
	
	return 0;
}

