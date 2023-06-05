/*
Practica 13: Matrices 3
Name: Kyb3r Cipher
Date: 5/06/2023
School: CBTIS 89 - 2A TM

Elabora un programa en C++ que llene una matriz de NxN con numeros de 1000 en 100, iniciando en 1000.
*/
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int filasSize, columnasSize;
    
    cout << "Dime el numero de filas a utilizar: ";
    cin >> filasSize;
    cout << "Dime el numero de columnas a utilizar: ";
    cin >> columnasSize;
    
    // Crear la matriz de filas x columnas
    vector<vector<int>> matrix(filasSize, vector<int>(columnasSize));
    
    // Llenar la matriz
    int numero = 1000;
    for (int i = 0; i < filasSize; i++) {
        for (int j = 0; j < columnasSize; j++) {
            matrix[i][j] = numero;
            numero += 100;
        }
    }
    
    // Imprimir tabla {
    // No se puede usar la libreria por que puede variar el tamano de las filas y columnas algo que la libreria no soporta.
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
    for (int fila = 0; fila < filasSize; fila++) {
        cout << setw(3) << left << fila << "| ";
        for (int columna = 0; columna < columnasSize; columna++) {
            cout << setw(8) << left << matrix[fila][columna] << " ";
        }
        cout << "\n";   // line-break luego de imprimir la fila con las matrices (no va adentro del for por que debe saltar al terminar de imprimir la fila y como no se sabe cuantas filas hay se salta hasta que se termine).
    }
    //} (fin de la impresion de la tabla)
    
    return 0;
}
