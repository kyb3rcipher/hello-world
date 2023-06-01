/*
Practica 12: Matrices 2
Name: Kyb3r Cipher
Date: 31/05/2023
School: CBTIS 89 - 2A TM

Elabora un progrma en C++ que llene una matriz de 6x2 con numeros de 100 en 100,
iniciando en el 150, posteriormente que imrpima el contenido de la matriz.
*/
#include <iostream>
#include "libs/VariadicTable.h"
using namespace std;

int main(int argc, char *argv[]) {
    int matrix[6][2], numero = 150;
    
    for (int columna = 0; columna < 2; columna++) {
        for (int fila = 0; fila < 6; fila++) {
            matrix[fila][columna] = numero;
            numero += 100;
        }
    }
    
    // Imprimir tabla
    VariadicTable<int, int, int> vt({"x", "0", "1"}, 10);
    
    for (int filas = 0; filas < 6; filas++) {
        vt.addRow(filas, matrix[filas][0], matrix[filas][1]);
    }
    
    vt.print(cout);
	return 0;
}
