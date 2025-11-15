/*
Dada las cantidades y precios de 10 articulos, obtener el total de las ventas considereando lo siguiente:
si la compra es mayor a 1000 hacer un descuento del 20%
si la compra es menor de 500 y mayor de 300 haer un descuento del 5%
si la compra es menor o igual a 300 no se hara ningun descuento
si la compra es mayor a 500 hacer un descuento del 10%

Calcular el subtotal y el Impuesto al Valor Agregado (IVA)
Obtener el total de la compra

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
	int i = 1, compra = 0, precio, cantidad, pago = 0, descuento, subtotal, iva, total_pagar;
	
	// Solicitar el precio y cantidad de los articulos
	do {
		cout << "\nDame el precio del articulo " << i << ": " << endl;
		cin >> precio;
		cout << "Dame la cantidad del articulo " << i << ": " << endl;
		cin >> cantidad;
		pago = precio * cantidad;
		compra += pago;
		i++;
	} while (i != 11);
	
	// Calcular el descuento de la compra dependiento el total de esta
	if (compra > 1000) {
		descuento = compra * 0.20;
	} else if (compra > 500) {
		descuento = compra * 0.10;
	} else if (compra > 300) {
		descuento = compra * 0.05;
	} else {
		descuento = compra * 0;
	}
	
	// Calcular el IVA y el total a pagar
	subtotal = compra - descuento;
	iva = subtotal * 0.16;
	total_pagar = subtotal + iva;
	
	// Imprmir el pago total y el IVA
	cout << "\n===========================================" << endl;
	cout << "El IVA de los articulos es: " << iva << endl;
	cout << "El total a pagar de los articulos es: " << total_pagar << endl;
	cout << "===========================================" << endl;
	
	return 0;
}

