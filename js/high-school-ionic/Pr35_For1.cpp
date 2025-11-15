/*
Author: Kyb3r Cipher
Grade: 2A Programacion TM - CBTIS 89
Date: 04/04/2022

Por medio de un ciclo for hacer un programa que imprima los numeros nones,
iniciando en el 5 y terminando en el 35, al final mostrar la suma de ellos.
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int suma = 0;
	
	for (int i = 5; i <= 35; i += 2) {
		cout << i << " ";
		suma += i;
	}
	
	cout << "\nLa suma de los numeros nones es: " << suma << endl;
	
	return 0;
}

