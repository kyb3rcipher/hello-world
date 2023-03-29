/*

by: Kyb3r Cipher
*/
#include <iostream>
#include "libraries/termcolor.hpp"
#include "libraries/decocraft.hpp"
using namespace std;

int main(int argc, char *argv[]) {
    float pesos, dolares, euros, yenes, wones;
    int option;

    // Definir color
    cout << termcolor::green;

    cout << "Dime los pesos a convertir: $";
    cin >> pesos;

    cout << "\n";
    decoration_equal();
    cout << "Convertir a: " << endl;
    cout << "1. Dolares" << endl;
    cout << "2. Euros" << endl;
    cout << "3. Yenes" << endl;
    cout << "4. Wones" << endl;
    decoration_equal();
    cout << "Dime la opcion >> ";
    cin >> option;

    clean_screen();
    decoration_equal();
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
            cout << termcolor::red;
            clean_screen();
            decoration_equal();
            cout << "Error: Opcion Invalida" << endl;
            decoration_equal();
            return 1;
            break;
    }
    decoration_equal();

    cout << termcolor::reset;
    return 0;
}