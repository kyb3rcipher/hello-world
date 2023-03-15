/*
Calcular y mostrar el IVA y el total a pagar por cuatro articulos comprados

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    float precio, total, iva;
    
    for (int i = 1; i <= 4; i++) {
        cout << "Dime el precio del articulo " << i << ": ";
        cin >> precio;
        total += precio;
    }
    iva = total * 0.16;
    
    cout << "\n====================================" << endl;
    cout << "El pago por los articulos es: " << total << endl;
    cout << "El pago por el IVA es: " << iva << endl;
    cout << "El pago total por todo es: " << total + iva << endl;
    cout << "====================================" << endl;
    
    return 0;
}
