/*
Practica 14: Matrices 4
Name: Kyb3r Cipher
Date: 31/05/2023
School: CBTIS 89 - 2A TM

Elabbora un programa en C++ que llene una matriz de 2x3 con nombres de productos,
posteriormente que imprima el contenido de la matriz.
*/
#include <iostream>
#include "libs/VariadicTable.h"
using namespace std;

int main(int argc, char *argv[]) {
    string productos[2][3];
    
    for (int fila = 0; fila < 2; fila++) {
        for (int columna = 0; columna < 3; columna++) {
            cout << "Dime el producto para [" << fila << " x " << columna << "]: ";
            cin >> productos[fila][columna];
        }
        cout << "\n";
    }
    
    VariadicTable<int, string, string, string> vt({"x", "0", "1", "2"}, 10);
    
    for (int fila = 0; fila < 2; fila++)
        vt.addRow(fila, productos[fila][0], productos[fila][1], productos[fila][2]);
    
    vt.print(cout);
    return 0;
}
