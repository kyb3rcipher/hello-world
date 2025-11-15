/*
Practica 17: Matrices 7
Name: Kyb3r Cipher
Date: 3/06/2023
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

int main(int argc, char *argv[]) {
    int matriz[3][3];
    int valor = 10;
    
    for (int fila = 0; fila  < 3; fila++) {
        for (int columna = 0; columna < 3; columna++) {
            matriz[fila][columna] = valor;
            valor += 10;
        }
    }
    
    VariadicTable<int, int, int, int> vt({"x", "0", "1", "2"}, 10);
    cout << "Matriz NORMAL" << endl;
    for (int fila = 0; fila < 3; fila++)
        vt.addRow(fila, matriz[fila][0], matriz[fila][1], matriz[fila][2]);
    vt.print(cout);
    
    VariadicTable<int, int, int, int> vt2({"x", "0", "1", "2"}, 10);
    cout << "\nMatriz INVERTIDA" << endl;
    for (int fila = 0; fila < 1; fila++) {
        for (int columna = 0; columna < 3; columna++) {
            vt2.addRow(columna, matriz[fila][columna], matriz[1][columna], matriz[2][columna]);
        }
    }
    vt2.print(cout);
    
    VariadicTable<int, int, int, int> vt3({"x", "0", "1", "2"}, 10);
    cout << "\nMatriz ABAJO hacia ARRIBA" << endl;
    for (int columna = 0; columna >= 0; columna--) {
        for (int fila = 2; fila >= 0; fila--) { 
            vt3.addRow(2 - fila, matriz[fila][0], matriz[fila][1], matriz[fila][2]);
        }
    }
    vt3.print(cout);
    
    VariadicTable<int, int, int, int> vt4({"x", "0", "1", "2"}, 10);
    cout << "\nMatriz ESPEJO" << endl;
    for (int fila = 0; fila < 3; fila++) {
        vt4.addRow(fila, matriz[fila][2], matriz[fila][1], matriz[fila][0]);
    }
    vt4.print(cout);
    
    VariadicTable<int, int, int, int> vt5({"x", "0", "1", "2"}, 10);
    cout << "\nMatriz ESPEJO INVERTIDA" << endl;
    for (int columna = 0; columna >= 0; columna--) {
        for (int fila = 2; fila >= 0; fila--) {
            vt5.addRow(2 - fila, matriz[fila][2], matriz[fila][1], matriz[fila][0]);
        }
    }
    vt5.print(cout);
    
    return 0;
}
