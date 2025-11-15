/*
Author: Kyb3r Cipher
Grade: 2A Programacion TM - CBTIS 89
Date: 04/04/2022

Por medio de un ciclo while, hacer un programa que solicite el precio de cuatro articulos y al final imprima el total a pagar por ellos considerando lo siguiente:
Si el total a pagar es mayor de $500 se le hara und descuento del 5%, en caso contrario no tendra descuento.
*/
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	float precio, total = 0;
	int contador = 0;
	
	while (contador < 4) {
		cout << "Ingresa el precio del articulo " << contador+1 << ": ";
		cin >> precio;
		total += precio;
		contador++;
	}
	
	if (total > 500) {
		float descuento = total * 0.05;
		total -= descuento;
		cout << "El total a pagar es de $" << total << " con un descuento de $" << descuento << endl;
	} else {
		cout << "El total a pagar es de $" << total << endl;
	}
	
	return 0;
}

