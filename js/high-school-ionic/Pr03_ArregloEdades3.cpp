/*
Practica 3: Array 3
Name: Kyb3r Cipher
Date: 17/05/2023
School: CBTIS 89 - 2A TM

Programa que almacena las edades en un arreglo. Mostrar en una tablita [uwu]:
---------------------------------------------------------------------------
| Alumnos |     U1     |     U2     |     U3     |  Promedio  |  Status   |
---------------------------------------------------------------------------
| Galileo |         10 |        6.6 |        9.9 |          8 | APROBADO  |
| Benito  |         10 |         10 |         10 |         10 | APROBADO  |
| Olivia  |        6.6 |        6.6 |        6.6 |          6 | APROBADO  |
| Conan   |        4.5 |        7.7 |          0 |          4 | REPROBADO |
| David   |        7.8 |        5.6 |        4.4 |          5 | REPROBADO |
---------------------------------------------------------------------------
*/
#include <iostream>
#include "libs/VariadicTable.h"
using namespace std;

int main(int argc, char *argv[]) {
    string alumno[5], status[5];
    float unidad[15];
    int promedio[5];

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ".- Dime el nombre del alumno y sus 3 calificaciones: ";
        cin >> alumno[i] >> unidad[i * 3] >> unidad[(i * 3) + 1] >> unidad[(i * 3) + 2];
        // +1 (se repite por eso el *3 para que cubicamente no se repita, 3 por que 3*3=15 15 slots de unidad)
        //0    alumno[0]    unidad[0]    unidad[1]        unidad[2]
        //1    alumno[1]    unidad[1]    unidad[2]        unidad[3]
        //2    alumno[2]    unidad[2]    unidad[3]        unidad[4]
        //3    alumno[3]    unidad[3]    unidad[4]        unidad[5]
        //4    alumno[4]    unidad[4]    unidad[5]        unidad[6]
        // *3 + 1
        //0    alumno[0]    unidad[0]    unidad[1]        unidad[2]
        //1    alumno[1]    unidad[3]    unidad[4]        unidad[5]
        //2    alumno[2]    unidad[6]    unidad[7]        unidad[8]
        //3    alumno[3]    unidad[9]    unidad[10]       unidad[11]
        //4    alumno[4]    unidad[12]   unidad[13]       unidad[14]
        
        promedio[i] = (unidad[i * 3] + unidad[(i * 3) + 1] + unidad[(i * 3) + 2]) / 3;
        status[i] = (promedio[i] > 5) ? "APROBADO" : "REPROBADO";
    
        /*
        if (promedio[i] > 5)
            status[i] = "APROBADO";
        else
            status[i] = "REPROBADO";
        */
    }

    cout << "\n";   // line-break before table
    {
        VariadicTable<string, float, float, float, float, string> vt({"Alumnos", "U1", "U2", "U3", "Promedio", "Status"}, 10);
        
        for (int j = 0; j < 5; j++) {
            vt.addRow(alumno[j], unidad[j * 3], unidad[(j * 3) + 1], unidad[(j * 3) + 2], promedio[j], status[j]);
        }
        
        
        vt.print(cout);
    }

    // descomentar para imprimir una tabla sin libreria (comentar la tabla anterior y el #inlcude de la libreria)
    /*
    cout << "|     Alumnos     |     U1     |     U2     |     U3     |     Promedio     |" << endl;
    for (int j = 0; j < 5; j++) {
        cout << "|     " << alumno[j] << "     |     " << unidad[j * 3] << "     |     "  << unidad[(j * 3) + 1] << "     |     "  << unidad[(j * 3) + 2] << "     |     " << status[j] << "     |" << endl;
    }
    */

    return 0;
}


