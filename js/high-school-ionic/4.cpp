/*
Obtener el area de un triangulo

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    float base, altura, area;
    cout << "Dime la base de tu triangulo: ";
    cin >> base;
    cout << "Dime la altura de tu triangulo: ";
    cin >> altura;
    area = (base * altura) / 2;
    cout << "El area de tu triangulo con base " << base << " y altura " << altura << " es de: " << area << endl;
    return 0;
}
