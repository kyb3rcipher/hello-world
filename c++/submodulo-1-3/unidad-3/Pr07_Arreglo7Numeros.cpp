/*
Practica 7: Array 7
Name: Kyb3r Cipher
Date: 20/05/2023
School: CBTIS 89 - 2A TM

Programa que almacena por medio de un ciclo los numeros del 150 al 300 de la siguiente manera:
En el Arreglo1 van los numeros pares, en el Arreglo2 van los numeros Impares, ene el Arreglo3 va la suma de los numeros correspondiente al mismo indice.
Declara los arreglos de 100 posiciones de tipo entero.
-------------------------------------
| Arreglo 1 | Arreglo 2 | Arreglo 3 |
-------------------------------------
|       150 |       151 |       301 |
|       152 |       153 |       305 |
...
*/
#include <iostream>
#include "libs/VariadicTable.h"
using namespace std;

int main(int argc, char *argv[]) {
    int arreglo1[150], arreglo2[150], arreglo3[150];
    int contador1 = 0, contador2 = 0;

    VariadicTable<int, int, int> vt({"Arreglo 1", "Arreglo 2", "Arreglo 3"}, 10);
    
	for (int i = 150; i <= 300; i++) {
        if ((i % 2) == 0) {
            arreglo1[contador1] = i;
            contador1++;
        } else {
            arreglo2[contador2] = i;
            contador2++;
        }
    }
    
    for (int i = 0; i <= 150; i++)
        arreglo3[i] = arreglo1[i] + arreglo2[i];
    
    // Calcula el 50% (la mitad) del numero por que solo se imprimira la mitad de los numeros, 75 + 75 = 150. Cuz en cada fila se imprime doble
    // sumamos uno para imprimir la ultima linea.
    for (int i = 0; i < ((0.5 * 150) + 1); i++)
        vt.addRow(arreglo1[i], arreglo2[i], arreglo3[i]);
    
    vt.print(cout);

	return 0;
}

