/*
Problema bank :v

by: Kyb3r Cipher
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int cheque, billete1000, billete500, billete200, billete100, billete50, billete20, moneda10, moneda5, moneda2, moneda1;
    
    // Pedir al usuario el monto del cheque
    cout << "Ingrese el monto del cheque: ";
    cin >> cheque;
    
    // Realizar la conversion a billetes y monedas
    billete1000 = trunc(cheque / 1000);
    cheque = cheque % 1000;
    billete500 = trunc(cheque / 500);
    cheque = cheque % 500;
    billete200 = trunc(cheque / 200);
    cheque = cheque % 200;
    billete100 = trunc(cheque / 100);
    cheque = cheque % 100;
    billete50 = trunc(cheque / 50);
    cheque = cheque % 50;
    billete20 = trunc(cheque / 20);
    cheque = cheque % 20;
    moneda10 = trunc(cheque / 10);
    cheque = cheque % 10;
    moneda5 = trunc(cheque / 5);
    cheque = cheque % 5;
    moneda2 = trunc(cheque / 2);
    cheque = cheque % 2;
    moneda1 = cheque;
    
    // Mostrar los billetes y monedas resultantes
    cout << "\n";    // line-break
    cout << "====================================================" << endl;
    cout << "Billetes de 1000: " << billete1000 << endl;
    cout << "Billetes de 500: " << billete500 << endl;
    cout << "Billetes de 200: " << billete200 << endl;
    cout << "Billetes de 100: " << billete100 << endl;
    cout << "Billetes de 50: " << billete50 << endl;
    cout << "Billetes de 20: " << billete20 << endl;
    cout << "Monedas de 10: " << moneda10 << endl;
    cout << "Monedas de 5: " << moneda5 << endl;
    cout << "Monedas de 2: " << moneda2 << endl;
    cout << "Monedas de 1: " << moneda1 << endl;
    cout << "====================================================" << endl;
    return 0;
}
