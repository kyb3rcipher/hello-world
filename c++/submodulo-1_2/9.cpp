/*
Calcular el perimetro de un triangulo

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    float lado1, lado2, lado3, perimetro;

    cout << "Dime el lado 1 de tu triangulo: ";
    cin >> lado1;
    cout << "Dime el lado 2 de tu triangulo: ";
    cin >> lado2;
    cout << "Dime el lado 3 de tu triangulo: ";
    cin >> lado3;
    perimetro = lado1 + lado2 + lado3;
    
    cout << "El perimetro de tu triangulo es: " << perimetro << endl;
    return 0;
}
