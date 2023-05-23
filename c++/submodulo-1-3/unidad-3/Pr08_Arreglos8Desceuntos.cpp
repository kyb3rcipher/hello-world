/*
Practica 8: Array 8
Name: Kyb3r Cipher
Date: 23/05/2023
School: CBTIS 89 - 2A TM

Programa que solicita el total de 6 compras realizadas y las almacena en un arreglo,
en otros arreglos se debe almacenar infromacion de acuerdo a las siguientes codiciones:

* Si la compra el menor o igual a 300 no lleva descuento.
* Si la compra es mayor de 300 pero menor o igual a 1000 lleva un descuento del 10%.
* Si la compra es mayor de 1000 pero menor o igual a 5000 lleva un descuento del 20%.
* Si la compra es mayor de 5000 lleva un descuento del 25%.
*/
#include <iostream>
#include <iomanip>
#include "libs/VariadicTable.h"
using namespace std;

int main(int argc, char *argv[]) {
    float compra[6], descuento[6], totalDescuento, total;
    string porcentaje;
    
    VariadicTable<float, float, float, string> vt({"Compra", "Descuento", "Total", "Porcentaje"}, 10);
    
	for (int i = 0; i < 6; i++) {
        cout << "Dime el total de la compra " << i + 1 << ": ";
        cin >> compra[i];
        
        if (compra[i] <= 300) {
            descuento[i] = 0;
        } else if (compra[i] > 300 && compra[i] <= 1000) {
            descuento[i] = 10;
        } else if (compra[i] > 1000 && compra[i] <= 5000) {
            descuento[i] = 20;
        } else if (compra[i] > 5000) {
            descuento[i] = 25;
        }

        totalDescuento = compra[i] * (descuento[i] / 100);
        total = compra[i] - totalDescuento;

        porcentaje = to_string(static_cast<int>(descuento[i])) + "%";

        vt.addRow(compra[i], totalDescuento, total, porcentaje);
    }

    cout << "\n";
    vt.print(cout);
    
	return 0;
}

