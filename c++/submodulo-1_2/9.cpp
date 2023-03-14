/*
Calcular el perimetro de un triangulo

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    float lado, perimetro = 0;
    for (int i = 1; i <= 3; i++) {
        cout << "Dime el lado " << i  << " de tu triangulo" << ": ";
        cin >> lado;
        perimetro += lado;
    }
    cout << "El perimetro de tu triangulo es: " << perimetro << endl;
    return 0;
}
