/*
Author: Kyb3r Cipher
Grade: 2A Programacion TM - CBTIS 89
Date: 04/04/2022

Hacer un programa que por medio de un ciclo calcule el total a pagar por N articulos
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int cantidad, contador = 0;
	float precio, total = 0;
	
	cout << "Ingresa la cantidad de articulos a comprar: ";
	cin >> cantidad;
	
	while (contador < cantidad) {
		cout << "Ingresa el precio del articulo " << contador+1 << ": ";
		cin >> precio;
		total += precio;
		contador++;
	}
	
	cout << "El total a pagar por " << cantidad << " articulos es de $" << total << endl;
	
	return 0;
}

