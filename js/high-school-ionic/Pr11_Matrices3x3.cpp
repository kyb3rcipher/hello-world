/*
Practica 11: Matrices 1
Name: Kyb3r Cipher
Date: 29/05/2023
School: CBTIS 89 - 2A TM

Programa que solicite numeros y los guarde en una matrices (llenando filas de izquierda a derecha)
*/
#include <iostream>
#include "libs/VariadicTable.h"
using namespace std;

int main(int argc, char *argv[]) {
    int matrix[3][3];
    
    for (int fila = 0; fila < 3; fila++) {
        for (int columna = 0; columna < 3; columna++) {
            cout << "Dime el numero para: " << fila << " x " << columna << ": ";
            cin >> matrix[fila][columna];
        }
        cout << "\n";
    }
    
    // Imprimir tabla
    VariadicTable<int, int, int, int> vt({"x", "0", "1", "2"}, 10);
    
    for (int fila = 0; fila < 3; fila++)
        vt.addRow(fila, matrix[fila][0], matrix[fila][1], matrix[fila][2]);
    
    vt.print(cout);
    return 0;
}

