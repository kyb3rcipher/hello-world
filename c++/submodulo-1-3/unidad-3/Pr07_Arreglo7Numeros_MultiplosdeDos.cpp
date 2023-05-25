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
    int arreglo1[151], arreglo2[151], arreglo3[151];    // 150 numeros + 1 para el numero 300
    int contador = 0;

    VariadicTable<int, int, int> vt({"Arreglo 1", "Arreglo 2", "Arreglo 3"}, 10);
    
	for (int i = 150; i <= 301; i++) {
        if ((i % 2) == 0) {
            arreglo1[contador] = i;
        } else {
            arreglo2[contador- 1] = i;
        }

        contador++;
    }

    for (int i = 0; i < contador; i++) // se ejecutara 75 veces por que se ejecutara mientras sea menor (no igual) a 76
        arreglo3[i] = arreglo1[i] + arreglo2[i];

    // No se ejecuta el bucle 150 veces por que solo se deben imprimir 76 lineas (en cada una: un numero par y uno impar, y en la linea 76 el 300)
    // 75 + 75 = 150, 150 numeros + 1 linea para el 300
    for (int i = 0; i < contador; i+=2)
        vt.addRow(arreglo1[i], arreglo2[i], arreglo3[i]);
    
    vt.print(cout);

	return 0;
}

