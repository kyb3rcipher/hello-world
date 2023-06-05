/*
Practica 17: Matrices 7
Name: Kyb3r Cipher
Date: 31/05/2023
School: CBTIS 89 - 2A TM

Elabora un programa en C++ que llene una matriz de 3x3 con numeros de 10 en 10,
comenzando en el 10, posteriormente que la imprima de las sigueitnes formas:

✅ Impresion de la Matriz de forma NORMAL.
✅ Impresion de la Matriz invirtiendo filas por columnas.
✅ Impresion de la Matriz de la fila de abajo hacia arriba.
✅ Impresion de la Matriz en forma de espejo.
✅ Impresion de la Matriz en forma de espejo invertida.

-----------------------------------------------------
| Matriz NORMAL                    Matriz INVERTIDA |
| ----------------                 ---------------- |
| | 10 | 20 | 30 |                 | 10 | 40 | 70 | |
| | 40 | 50 | 60 |                 | 20 | 50 | 80 | |
| | 70 | 80 | 90 |                 | 30 | 60 | 90 | |
| ----------------                 ---------------- |
|                                                   |
| Matriz ABAJO hacia ARRIBA        Matriz ESPEJO    |
| ----------------                 ---------------- |
| | 70 | 80 | 90 |                 | 30 | 20 | 10 | |
| | 40 | 50 | 60 |                 | 60 | 50 | 40 | |
| | 10 | 20 | 30 |                 | 90 | 80 | 70 | |
| ----------------                 ---------------- |
|                                                   |
| Matriz ESPEJO INVERTIDA                           |
| ----------------                                  |
| | 90 | 80 | 70 |                                  |
| | 60 | 50 | 40 |                                  |
| | 30 | 20 | 10 |                                  |
| ----------------                                  |
-----------------------------------------------------
*/
#include <iostream>
#include "libs/VariadicTable.h"
using namespace std;

void imprimir_normal(int matriz[3][3], int uno, int dos, int tres, bool columna) {
    VariadicTable<int, int, int, int> vt({"x", "0", "1", "2"}, 10);
    
    if (columna) {
        for (int fila = 0; fila < 1; fila++) {
            for (int columna = 0; columna < 3; columna++) {
                vt.addRow(columna, matriz[fila][columna], matriz[1][columna], matriz[2][columna]);
            }
        }
    } else {
        for (int fila = 0; fila < 3; fila++)
            vt.addRow(fila, matriz[fila][uno], matriz[fila][dos], matriz[fila][tres]);
    }
    
    vt.print(cout);
}

void imprimir_invertida(int matriz[3][3], int uno, int dos, int tres) {
    VariadicTable<int, int, int, int> vt({"x", "0", "1", "2"}, 10);
    for (int fila = 0; fila >= 0; fila--) {
        for (int fila = 2; fila  >= 0; fila --) {
            vt.addRow(2 - fila, matriz[fila ][uno], matriz[fila][dos], matriz[fila ][tres]);
        }
    }
    vt.print(cout);
}

int main(int argc, char *argv[]) {
    
    // Llenar matriz
    int matriz[3][3];
    int valor = 10;
    
    for (int fila = 0; fila  < 3; fila++) {
        for (int columna = 0; columna < 3; columna++) {
            matriz[fila][columna] = valor;
            valor += 10;
        }
    }
    
    // Imprimir matrices
    cout << "Matriz NORMAL" << endl;
    imprimir_normal(matriz, 0, 1, 2, false);
    
    cout << "\nMatriz INVERTIDA" << endl;
    imprimir_normal(matriz, 0, 1, 2, true);
    
    cout << "\nMatriz ABAJO hacia ARRIBA" << endl;
    imprimir_invertida(matriz, 0, 1, 2);
    
    cout << "\nMatriz ESPEJO" << endl;
    imprimir_normal(matriz, 2, 1, 0, false);
    
    cout << "\nMatriz ESPEJO INVERTIDA" << endl;
    imprimir_invertida(matriz, 2, 1, 0);
    
    return 0;
}
