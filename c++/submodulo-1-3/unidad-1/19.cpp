/*
Leer 2 numeros, si son iguales que los multiplique,
si el primero es mayor que el segundo que los reste

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Dime el numero 1: ";
    cin >> num1;
    cout << "Dime el numero 2: ";
    cin >> num2;

    if (num1 == num2) {
        cout << "La multiplicacion de " << num1 << " * " << num2 << " = " << num1 * num2;
    } else if (num1 > num2) {
        cout << "La resta de " << num1 << " - " << num2 << " = " << num1 - num2;
    }
    return 0;
}
