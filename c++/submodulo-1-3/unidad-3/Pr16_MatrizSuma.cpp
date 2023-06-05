/*
Practica 12: Matrices 3
Name: Kyb3r Cipher
Date: 31/05/2023
School: CBTIS 89 - 2A TM

Elabora un progrma en C++ que llene dos matrices con valores numericos de la sigueinte manera:

MatrizA[3][3] Debe contener valores de 10 en 10 inciaindo en 100.
MatrizB[3][3] Debe contener valores de 20 en 20 inciaindo en 500.
MatrizC[3][3] Debe contener la suma de los valores de las matrices A y B, en el mismo indice.

---------------------------------------------------------
| MatrizA                           MatrizB             |
| -------------------               ------------------- |
| | 100 | 110 | 120 |               | 500 | 520 | 540 | |
| | 130 | 140 | 150 |               | 560 | 580 | 600 | |
| | 160 | 170 | 180 |               | 620 | 640 | 660 | |
| -------------------               ------------------- |
|                                                       |
| MatrizB                           MatrizC             |
| -------------------               ------------------- |
| | 500 | 520 | 540 |               | 600 | 630 | 660 | |
| | 560 | 580 | 600 |               | 690 | 720 | 750 | |
| | 620 | 640 | 660 |               | 780 | 810 | 840 | |
| -------------------               ------------------- |
---------------------------------------------------------
*/
#include <iostream>
#include "libs/VariadicTable.h"
using namespace std;

int main(int argc, char *argv[]) {
    int matrizA[3][3], matrizB[3][3], matrizC[3][3];
    int numero;
    
    cout << "MatrizA" << endl;
    numero = 100;
    VariadicTable<int, int, int, int> vt({"x", "0", "1", "2"}, 10);
    for (int fila = 0; fila  < 3; fila ++) {
        for (int columna = 0; columna < 3; columna++) {
            matrizA[fila][columna] = numero;
            numero += 10;
        }
        vt.addRow(fila, matrizA[fila][0], matrizA[fila][1], matrizA[fila][2]);
    }
    vt.print(cout);
    
    cout << "\nMatrizB" << endl;
    numero = 500;
    VariadicTable<int, int, int, int> vt2({"x", "0", "1", "2"}, 10);
    for (int fila = 0; fila  < 3; fila ++) {
        for (int columna = 0; columna < 3; columna++) {
            matrizB[fila][columna] = numero;
            numero += 20;
        }
        vt2.addRow(fila, matrizB[fila][0], matrizB[fila][1], matrizB[fila][2]);
    }
    vt2.print(cout);
    
    cout << "MatrizC" << endl;
    VariadicTable<int, int, int, int> vt3({"x", "0", "1", "2"}, 10);
    for (int fila = 0; fila  < 3; fila ++) {
        for (int columna = 0; columna < 3; columna++) {
            matrizC[fila][columna] = matrizA[fila][columna] + matrizB[fila][columna];
        }
        vt3.addRow(fila, matrizC[fila][0], matrizC[fila][1], matrizC[fila][2]);
    }
    vt3.print(cout);
    
	return 0;
}
