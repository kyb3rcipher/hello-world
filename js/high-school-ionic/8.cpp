/*
Calcular el precio total por seis articulos comprados

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    int precio1, precio2, precio3, precio4, precio5, precio6, total;

    cout << "Dime el precio del articulo 1: ";
    cin >> precio1;
    cout << "Dime el precio del articulo 2: ";
    cin >> precio2;
    cout << "Dime el precio del articulo 3: ";
    cin >> precio3;
    cout << "Dime el precio del articulo 4: ";
    cin >> precio4;
    cout << "Dime el precio del articulo 5: ";
    cin >> precio5;
    cout << "Dime el precio del articulo 6: ";
    cin >> precio6;
    
    total = precio1 + precio2 + precio3 + precio4 + precio5 + precio6;

    cout << "El total por los 6 articulos es: " << total << endl;
    return 0;
}
