/*
Leer un numero e imprimir si es positivo, negativo o cero

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Dime el numero: ";
    cin >> num;
    
    if ((num % 2) == 0) {
        cout << "El numero es par" << endl;
    } else {
        cout << "El numero es impar" << endl;
    }
    return 0;
}
