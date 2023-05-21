/*
Practica 5: Array 5
Name: Kyb3r Cipher
Date: 19/05/2023
School: CBTIS 89 - 2A TM

Programa que almacena articulos diversos en un vector, asi como el precio y cantidad.
Posteriorente calcula el Subtotal, el IVA y el Total. Imprime todos los arreglos. Imprimir en tablita uwu:
----------------------------------------------------------------------------
| Articulos | Cantidad |   Precio   |  Subtotal  |     IVA    |    TOTAL   |
----------------------------------------------------------------------------
| Libreta   |       20 |         10 |        200 |         32 |        232 |
| Mochila   |       15 |        130 |       1950 |        312 |       2262 |
| Pluma     |      180 |          6 |       1080 |      172.8 |     1252.8 |
---------------------------------------------------------------------------
*/
#include <iostream>
#include "libs/VariadicTable.h"
using namespace std;

int main(int argc, char *argv[]) {
    string articulos[3];
    int cantidad[3];
    float precio[3], subtotal[3], iva[3], total[3];

    VariadicTable<string, int, float, float, float, float> vt({"Articulos", "Cantidad", "Precio", "Subtotal", "IVA", "TOTAL"}, 10);
    
	for (int i = 0; i < 3; i++) {
        cout << i << ".- Dime el nombre del articulo, su cantidad y luego su precio: ";
        cin >> articulos[i] >> cantidad[i] >> precio[i];
        
        subtotal[i] = cantidad[i] * precio[i];
        iva[i] = subtotal[i] * 0.16;
        total[i] = subtotal[i] + iva[i];
        
        vt.addRow(articulos[i], cantidad[i], precio[i], subtotal[i], iva[i], total[i]);
    }
    
    // Tabla
    cout << "\n"; vt.print(cout);

	return 0;
}

