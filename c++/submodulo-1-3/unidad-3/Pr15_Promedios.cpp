/*
Practica 15: Matrices 5
Name: Kyb3r Cipher
Date: 31/05/2023
School: CBTIS 89 - 2A TM

Elabora un programa en C++ que llene una matriz de NxN(40x40) con numeros de 1000 en 100, iniciando en 1000.
*/
#include <iostream>
#include "libs/VariadicTable.h"
using namespace std;

int main(int argc, char *argv[]) {
    string nombres[4], status[4];
    float calificaciones[4][3], promedio[4];
    
    // alumno == fila
	for (int alumno = 0; alumno < 4; alumno++) {
        cout << alumno + 1 << ".- Dime tu nombre: ";
        cin >> nombres[alumno];
        
        float suma = 0;
        for (int columna = 0; columna < 3; columna++) {
            cout << nombres[alumno] << " dime tu calificacion " << columna + 1 << ": ";
            cin >> calificaciones[alumno][columna];
            
            suma += calificaciones[alumno][columna];
        }
        promedio[alumno] = suma / 3;
        
        status[alumno] = (promedio[alumno] >= 6) ? "APROBADO" : "REPROBADO";
        
        cout << "\n";
    }
    
    VariadicTable<string, float, float, float, float, string> vt({"Nombre", "Calificaciones 1", "Calificaciones 2", "Calificaciones 3", "Promedio", "Status"}, 10);
    
    cout << fixed << setprecision(2);   // definir el maximo de decimales a 2
    for (int alumno = 0; alumno < 4; alumno++)
        vt.addRow(nombres[alumno], calificaciones[alumno][0], calificaciones[alumno][1], calificaciones[alumno][2], promedio[alumno], status[alumno]);
    
    vt.print(cout);
    
	return 0;
}
