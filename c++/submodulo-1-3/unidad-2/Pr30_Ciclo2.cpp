/*
Author: Kyb3r Cipher
Grade: 2A Programacion TM - CBTIS 89
Date: 04/04/2022

Hacer un programa que solicite por medio de un ciclo cuatro precios de articulos y muestre la suma de ellos
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    float precio;
    int suma = 0, i = 1;
    while (i <= 4) {
        cout << "Dime el precio del articulo " << i << ": ";
        cin >> precio;
        suma += precio;
        i++;
    }
    cout << "El total de la suma de los articulos es: " << suma << endl;
    
    return 0;
}
