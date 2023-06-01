/*
Practica 13: Matrices 3
Name: Kyb3r Cipher
Date: 31/05/2023
School: CBTIS 89 - 2A TM

Elabora un programa en C++ que llene una matriz de NxN(40x40) con numeros de 1000 en 100, iniciando en 1000.
*/
#include <iostream>
#include "libs/VariadicTable.h"
using namespace std;

int main(int argc, char *argv[]) {
	int matrix[50][50], filasSize, columnasSize, numero = 1000;
    
    cout << "Dime el numero de filas a utilizar: ";
    cin >> filasSize;
    cout << "Dime el numero de columnas a utilizar: ";
    cin >> columnasSize;
    
    for (int columna = 0; columna < columnasSize; columna++) {
        for (int fila = 0; fila < filasSize; fila++) {
            matrix[fila][columna] = numero;
            numero += 1000;
        }
    }
    
    // Imprimir tabla
    // No se puede usar la libreria por que puede variar el tamano de las filas y columnas algo que la libreria no soporta,
    // (se podria definir las 40 y colocar 0 en las faltantes pero se veria feo)
    for (int columna = 0; columna < columnasSize; columna++) {
        for (int fila = 0; fila < filasSize; fila++) {
            cout << matrix[fila][columna] << " ";
        }
        cout << "\n";
    }
    
	return 0;
}
