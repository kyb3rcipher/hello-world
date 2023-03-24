/*
Calcular e imprimir el pago total de una compra de tres articulos, considerando
lo siguiente:
Si el monto de la compra es menor de 1000 recibira un descuento del 5%
Si es mayor o igual a 1000 pero menor de 2500 recibira un descuento del 10%
Y si es mayor o igual a 2500 el descuento sera del 20%

Imprimir la suma de los precios de los articulos,
el monto del descuento y el total a pagar despues de realizado descuento

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    int precio1, precio2, precio3, total, descuento, monto_descuento;

    cout << "Dime el precio del articulo 1: ";
    cin >> precio1;
    cout << "Dime el precio del articulo 2: ";
    cin >> precio2;
    cout << "Dime el precio del articulo 3: ";
    cin >> precio3;
    total = precio1 + precio2 + precio3;

    if (total < 1000) {
        descuento = total * 0.05;
        monto_descuento = 5;
    } else if (total >= 1000 && total < 2500) {
        descuento =  total * 0.10;
        monto_descuento = 10;
    } else if (total >= 2500) {
        descuento = total * 0.20;
        monto_descuento = 20;
    }

    cout << "El total de la suma de los articulos es: " << total << endl;
    cout << "El descuento es de: " << monto_descuento << "%" << endl;
    cout << "El total de todo es de: " << total - descuento << endl;
    return 0;
}
