/*
Calcular el iva del precio de un articulo
(IVA = 16%)

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    float precio, iva;
    cout << "Dime el precio de tu articulo: ";
    cin >> precio;
    iva = precio * 0.16;
    cout << "El iva de tu articulo es: " << iva << endl;
    return 0;
}
