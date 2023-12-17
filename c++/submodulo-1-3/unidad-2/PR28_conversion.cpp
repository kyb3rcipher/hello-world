/*
Author: Kyb3r Cipher
Grade: 2A Programacion TM - CBTIS 89
Date: 03/29/2022

Programa para convertir pesos a:
- dolares
- euros
- yenes
- wones
*/
#include <iostream>
//#include "libraries/decocraft.hpp"
using namespace std;

int main(int argc, char *argv[]) {
    float pesos, dolares, euros, yenes, wones;
    int option;

    cout << "Dime los pesos a convertir: $";
    cin >> pesos;

    cout << "\n";
    cout << "Convertir a: " << endl;
    cout << "1. Dolares" << endl;
    cout << "2. Euros" << endl;
    cout << "3. Yenes" << endl;
    cout << "4. Wones" << endl;
    cout << "Dime la opcion >> ";
    cin >> option;

    cout << "$" << pesos << " pesos son ";
    switch (option) {
        case 1:
            cout << "$" << pesos * dolares << " dolares" << endl;
            break;
        case 2:
            cout << "€" << pesos * euros << " euros" << endl;
            break;
        case 3:
            cout << "¥" << pesos * yenes << " yenes" << endl;
            break;
        case 4:
            cout << "₩" << pesos * wones << " wones" << endl;
            break;

        default:
            cout << "Error: Opcion Invalida" << endl;
            return 1;
            break;
    }

    return 0;
}
