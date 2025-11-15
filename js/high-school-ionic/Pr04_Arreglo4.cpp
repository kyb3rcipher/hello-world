/*
Practica 4: Array 4
Name: Kyb3r Cipher
Date: 19/05/2023
School: CBTIS 89 - 2A TM

Programa que almacena datos en tres arreglos de tipo entero:
Valores1, Valores2, Suma. Por medio de un ciclo registra 3 valores en cada arreglo (Valores1 y Valores2), posteriormente por medio de una formula sumalos valores y almacenalos en eel arreglo Suma.
Imprime en panatalla los valores de los tres arreglos. y los guarde en una tablita uwu:
------------------------------
| Valores1 | Valores2 | Suma |
------------------------------
|      100 |      150 |  250 |
|      350 |      200 |  550 |
|      120 |      180 |  300 |
------------------------------ 
*/
#include <iostream>
#include "libs/VariadicTable.h"
using namespace std;

int main(int argc, char *argv[]) {
    int valores1[3], valores2[3], suma[3];
    
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ".- Dime el numero para el valor 1: ";
        cin >> valores1[i];
    }

    for (int j = 0; j < 3; j++) {
        cout << j << ".- Dime el numero para el valor 2: ";
        cin >> valores2[j];
    }
    
    // Calcular sumas
    suma[0] = valores1[0] + valores2[0];
    suma[1] = valores1[1] + valores2[1];
    suma[2] = valores1[2] + valores2[2];
    
    cout << "\n";   // line-break before table
    // Tabla
    VariadicTable<int, int, int> vt({"Valores1", "Valores2", "Suma"}, 10);
    
    vt.addRow(valores1[0], valores2[0], suma[0]);
    vt.addRow(valores1[1], valores2[1], suma[1]);
    vt.addRow(valores1[2], valores2[2], suma[2]);
    
    vt.print(cout);
    
	return 0; 
}

