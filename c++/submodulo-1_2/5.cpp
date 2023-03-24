/*
Obtener el perimetro de un rectangulo

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    float base, altura, perimetro;
    cout << "Dime la base del rectangulo: ";
    cin >> base;
    cout << "Dime la altura del rectangulo: ";
    cin >> altura;
    perimetro = (base + altura) * 2;
    cout << "El perimetro de tu triangulo es: " << perimetro;
    return 0;
}
