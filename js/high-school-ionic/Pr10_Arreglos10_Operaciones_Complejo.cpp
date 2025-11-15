/*
Practica 10: Array 10
Name: Kyb3r Cipher
Date: 26/05/2023
School: CBTIS 89 - 2A TM

Programa que llena dos arreglos con 6 numeros enteros (tecleados por el usuario, se pueden teclear
numeros positivos o negativos), siguiendo algunas condiciones, posteriormente calcula y guarda en otros arreglos la suma, la resta, la multiplicacion y la division de los datos guardados.

Programa que almacena en un arreglo 6 numeros enteros (tecleados por el usuario, se pueden teclear numeros positivos o negativos),
siguiendo algunas condiciones, posteriormente calcula y guarda en otros arreglos la suma, la resta, la multiplicacion y la division.

Codiciones:
* En el arreglo numeros1 se almacenara unicamente datos positivos del 51 al 99.
* En el arreglo numeros2 se almacenara negativos que esten en el rango del -50 al -1.
*/
#include <iostream>
#include "libs/VariadicTable.h"
using namespace std;

int main(int argc, char *argv[]) {
    int numero[6], numeros1[6], numeros2[6], suma[3], resta[3], multiplicacion[3];
    float division[3];
    int contador1 = 0, contador2 = 0;
    
    for (int i = 0; i < 6; i++) {
        int j = false;
        bool repetir;
        do {
            repetir = false;
            if (j)
                cout << "\nERROR: El numero no cumple una condicion, intenta de nuevo" << endl;
            
            cout << i + 1 << ".- Dime el numero: ";
            cin >> numero[i];
            
            if (numero[i] < -50) {
                repetir = true;
            }
            
            if ((numero[i] >= 0 && numero[i] < 51) || numero[i] > 99) {
                repetir = true;
            }
            
            j = true;
        } while (repetir);
        
        if (numero[i] >= 51 && numero[i] <= 99) {
            numeros1[contador1] = numero[i];
            contador1++;
        } else if (numero[i] >= -50) {
            numeros2[contador2] = numero[i];
            contador2++;
        }
        
    }
    
    VariadicTable<int, int, int, int, int, float> vt({"Numeros 1", "Numeros 2", "Suma", "Resta", "Multiplicacion", "Division"}, 10);
    for (int i = 0; i < 3; i++) {
        // Calcular las operaciones
        suma[i] = numeros1[i] + numeros2[i];
        resta[i] = numeros1[i] - numeros2[i];
        multiplicacion[i] = numeros1[i] * numeros2[i];
        division[i] = numeros1[i] / numeros2[i];
        
        vt.addRow(numeros1[i], numeros2[i], suma[i], resta[i], multiplicacion[i], division[i]);
    }
    
    cout << "\n"; vt.print(cout);
    
	return 0;
}

