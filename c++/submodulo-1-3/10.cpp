/*
Calcular el perimetro de un triangulo

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    int num1, num2, residuo;
    cout << "Dime el numero 1: ";
    cin >> num1;
    cout << "Dime el numero 2: ";
    cin >> num2;
    residuo = num1 % num2;
    cout << "El residuo de " << num2 << " / " << num2 << " es: " << residuo << endl;
    return 0;
}
