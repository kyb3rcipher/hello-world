/*
Calcular y mostrar el IVA y el total a pagar por cuatro articulos comprados

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    float precio1, precio2, precio3, precio4, total, iva;

    cout << "Dime el precio del articulo 1: ";
    cin >> precio1;
    cout << "Dime el precio del articulo 2: ";
    cin >> precio2;
    cout << "Dime el precio del articulo 3: ";
    cin >> precio3;
    cout << "Dime el precio del articulo 4: ";
    cin >> precio4;
    total = precio1 + precio2 + precio3 + precio4;

    iva = total * 0.16;
    
    cout << "\n====================================" << endl;
    cout << "El pago por los articulos es: " << total << endl;
    cout << "El pago por el IVA es: " << iva << endl;
    cout << "El pago total por todo es: " << total + iva << endl;
    cout << "====================================" << endl;
    
    return 0;
}
