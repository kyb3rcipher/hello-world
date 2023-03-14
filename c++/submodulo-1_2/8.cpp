/*
Calcular el precio total por seis articulos comprados

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    int precio, total = 0;
    for (int i = 1; i <= 6; i++) {
        cout << "Dime el precio del articulo " << i << ": ";
        cin >> precio;
        total += precio;
    }
    cout << "El total por los 6 articulos es: " << total << endl;
    return 0;
}
