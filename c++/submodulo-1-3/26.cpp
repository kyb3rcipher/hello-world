/*[aqui inicia la segunda unidad]
Author: Kyb3r Cipher
Grade: 2A Programacion TM - CBTIS 89
Date: 03/29/2022

Programa que indica los dias de la semana usando switch case
*/
#include <iostream>
#include "libraries/decocraft.hpp"
#include "libraries/termcolor.hpp"
using namespace std;

int main(int argc, char *argv[]) {
    int dia;

    // Definir color :P
    cout << termcolor::yellow;

    cout << "Dime un numero de dia de la semana <1-7> >> ";
    cin >> dia;

    clean_screen();
    decoration_hastagh();
    switch (dia) {
        case 1:
            cout << "El dia numero " << dia << " corresponde al Lunes" << endl;
            break;
        case 2:
            cout << "El dia numero " << dia << " corresponde al Martes" << endl;
            break;
        case 3:
            cout << "El dia numero " << dia << " corresponde al Miercoles" << endl;
            break;
        case 4:
            cout << "El dia numero " << dia << " corresponde al Jueves" << endl;
            break;
        case 5:
            cout << "El dia numero " << dia << " corresponde al Viernes" << endl;
            break;
        case 6:
            cout << "El dia numero " << dia << " corresponde al Sabado" << endl;
            break;
        case 7:
            cout << "El dia numero " << dia << " corresponde al Domingo" << endl;
            break;

        default:
            cout << termcolor::red;
            clean_screen();
            decoration_hyphen();
            cout << "Error: Ese numero es mayor a los numeros de la semana (maximo 7)" << endl;
            decoration_hyphen();
            return 1;
            break;
    }

    decoration_hastagh();
    return 0;
}