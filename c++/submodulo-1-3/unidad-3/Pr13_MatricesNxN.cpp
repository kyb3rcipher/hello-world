/*
Practica 13: Matrices 3
Name: Kyb3r Cipher
Date: 31/05/2023
School: CBTIS 89 - 2A TM

Elabora un programa en C++ que llene una matriz de NxN(50x50) con numeros de 1000 en 100, iniciando en 1000.
*/
#include <iostream>
#include <iomanip>  // para el uso de la funcion setw (para la tabla)
using namespace std;

int main(int argc, char *argv[]) {
	int matrix[50][50], filasSize, columnasSize, numero = 1000;
    
    cout << "Dime el numero de filas a utilizar: ";
    cin >> filasSize;
    cout << "Dime el numero de columnas a utilizar: ";
    cin >> columnasSize;
    
    for (int columna = 0; columna < columnasSize; columna++) {
        for (int fila = 0; fila < filasSize; fila++) {
            matrix[fila][columna] = numero;
            numero += 1000;
        }
    }
    
    // Imprimir tabla {
    // No se puede usar la libreria por que puede variar el tamano de las filas y columnas algo que la libreria no soporta, (se podria definir las 40 y colocar 0 en las faltantes pero se veria feo).
    // En su lugar se utilizo setw para definir el tamano
    cout << "\n";   // line-break before print table
    
    // Index de columnas
    cout << setw(4) << "x  | ";
    for (int columna = 0; columna < columnasSize; columna++) {
        cout << setw(8) << left << columna << " ";
    }
    cout << "\n";   // line-break luego de imprimir el index de columnas (no va adentro del for por que debe saltar al terminar del indexer y como no se sabe cuando saltar se hace el salto hasta que termine).
    
    // Separador luego del index de columnas
    for (int columna = 0; columna < columnasSize; columna++) {
        cout << "----------";
    }
    cout << "\n";   // line-break luego de imprimir el separador de columnas (no va adentro del for por que debe saltar al terminar de imprimir el separador y como no se sabe cuando saltar se hace el salto hasta que termine).
    
    // Imprimir matrices con separadores para la tabla
    for (int columna = 0; columna < columnasSize; columna++) {
        cout << setw(3) << left << columna << "| ";
        for (int fila = 0; fila < filasSize; fila++) {
            cout << setw(8) << left << matrix[fila][columna] << " ";
        }
        cout << "\n";   // line-break luego de imprimir la fila con las matrices (no va adentro del for por que debe saltar al terminar de imprimir la fila y como no se sabe cuantas filas hay se salta hasta que se termine).
    }
    
    // } (fin de la impresion de la tabla)
    
	return 0;
}
