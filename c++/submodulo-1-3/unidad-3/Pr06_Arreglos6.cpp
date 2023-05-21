/*
Practica 6: Array 6
Name: Kyb3r Cipher
Date: 19/05/2023
School: CBTIS 89 - 2A TM

Programa que almacena infromacion de 6 personas y dependiendo de su edad contabiliza en diversos arreglos de acuerdo a las siguientes codiciones:

Si la persona es menor de 18 se debe colocar en 1 en el vector Grupo1, y en otros dos colocar un 0.
Si la persona tiene entre 18 y 19 se debe colocar un 1 en el vector Grupo2, y en los otros dos un 0.
Si la persona tiene 50 o mas se debe colocar un 1 ene l vector Grupo3, y en los otros dos un 0.

-----------------------------------------------
| Nombre | Edad | Grupo 1 | Grupo 2 | Grupo 3 |
-----------------------------------------------
| Paco   |   17 |       1 |       0 |       0 |
| Mari   |   30 |       0 |       1 |       0 |
| Lalo   |   71 |       0 |       0 |       1 |
| Rosy   |   38 |       0 |       1 |       0 |
| Paty   |   12 |       1 |       0 |       0 |
| Beto   |   58 |       0 |       0 |       1 |
-----------------------------------------------
*/
#include <iostream>
#include "libs/VariadicTable.h"
using namespace std;

int main(int argc, char *argv[]) {
    string nombres[6];
    bool grupo1[6] = {false, false, false, false, false, false}, grupo2[6] = {false, false, false, false, false, false}, grupo3[6] = {false, false, false, false, false, false};
    int edades[6];
    
    VariadicTable<string, int, bool, bool, bool> vt({"Nombre", "Edad", "Grupo 1", "Grupo 2", "Grupo 3"}, 10);
    
    for (int i = 0; i < 6; i++) {
        cout << i + 1 << ".- Dime tu nombre y tu edad: ";
        cin >> nombres[i] >> edades[i];
        
        if (edades[i] < 18) { grupo1[i] = true; }
        else if (edades[i] >= 18 && edades[i] <= 49) { grupo2[i] = true; }
        else if (edades[i] >= 50) { grupo3[i] = true; }
        
        vt.addRow(nombres[i], edades[i], grupo1[i], grupo2[i], grupo3[i]);
    }
    
    cout << "\n"; vt.print(cout);

    return 0;
}

