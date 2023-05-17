/*
Obtener el area de un cuadrado

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    int lado, area;
    cout << "Dime uno de los lados de tu cuadrado: ";
    cin >> lado;
    area = lado * lado;
    cout << "El area de tu cuadrado es: " << area << endl;
    return 0;
}

