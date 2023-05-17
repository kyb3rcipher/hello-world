/*
Author: Kyb3r Cipher
Grade: 2A Programacion TM - CBTIS 89
Date: 03/29/2022

Programa que usando switch case realize las siguientes operaciones:
1. Suma
2. Resta
3. Multiplicacion
4. Division
*/
#include <iostream>
#include "libraries/decocraft.hpp"
#include "libraries/termcolor.hpp"
using namespace std;

int main(int argc, char *argv[]) {
    float num1, num2;
    int option;

    // Definir color :P
    cout << termcolor::blue;

    cout << "Dime el primer numero: ";
    cin >> num1;
    cout << "Dime el segundo numero: ";
    cin >> num2;

    cout << "\n";
    decoration_hyphen();
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    decoration_hyphen();
    cout << "Dime la opcion >> ";
    cin >> option;

    clean_screen();
    decoration_hyphen();
    switch (option) {
        case 1:
            cout << "La suma de " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case 2:
            cout << "La resta de " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case 3:
            cout << "La multiplicacion de " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case 4:
            cout << "La division de " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;

        default:
            cout << termcolor::red;
            clean_screen();
            decoration_hyphen();
            cout << "Error: Opcion Invalida" << endl;
            decoration_hyphen();
            return 1;
            break;
    }
    decoration_hyphen();

    cout << termcolor::reset;
    return 0;
}
