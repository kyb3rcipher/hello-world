/*
Calcular el total a pagar por un articulo que tiene el 10% de descuento

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    float precio, total;
    cout << "Dime el precio del articulo: ";
    cin >> precio;
    
    total = precio * 0.10;
    cout << "\n===============================================" << endl;
    cout << "El precio del articulo es: " << precio << endl;
    cout << "El pago total (con descuento del 10%) es: " << total << endl;
    cout << "===============================================" << endl;
    
    return 0;
}
