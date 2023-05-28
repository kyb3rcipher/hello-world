/*
Practica 9: Array 9
Name: Kyb3r Cipher
Date: 25/05/2023
School: CBTIS 89 - 2A TM

Programa que alamacena datos de 4 alumnos en varios arreglos, segun se indica a continuacion:

-------------------------------------------------------------------
| Nombre | Ap_Paterno | Ap_Materno | Edad |  Genero   |   Curso   |
-------------------------------------------------------------------
| Carlos | Rosales    | Estrada    |   15 | Masculino | Futbol    |
| Brenda | Garcia     | Jimenez    |   10 | Femenino  | Natacion  |
| Camila | Lopez      | Rubio      |    5 | Femenino  | Gimnasia  |
| Mateo  | Pacheco    | Lopez      |    6 | Masculino | Taekwondo |
-------------------------------------------------------------------

Para la asignacion de los cursos se debn considerar las siguientes condiciones:
* Si es Hombre menor de 7 anios debe tomar el curso Taekwondo.
* Si es Hombre y tiene entre 7 y 10 anios el curso que se le asignara es Natacion.
* Si es Hombre y tiene entre 11 y 15 anios el curso que tomara sera Futbol.
* Si es Hombre de 16 anios en adelante debe cursar Ajedrez.
*
* Si es Mujer menor de 6 anios tomara el curso de Gimnasia.
* Si es Mujer y tiene entre 7 y 11 anios se le asignara el curso de Natacion.
* Si es Mujer y tiene entre 12 y 16 anios debe estar en el curso de Basquetbo.l
* Si es Mujer y tiene mas de 16 anios el curso asignado sera Tocho.
*/
#include <iostream>
#include "libs/VariadicTable.h"
using namespace std;

int main(int argc, char *argv[]) {
	string nombres[4], apellidosPaternos[4], apellidosMaternos[4], generos[4], cursos[4];
	int edades[4];
	
    VariadicTable<string, string, string, int, string, string> vt({"Nombre", "Ap_Paterno", "Ap_Materno", "Edad", "Genero", "Curso"}, 10);
    
	for (int i = 0; i < 4; i++) {
		cout << "Dime tu nombre y tus apellidos (paterno y materno): ";
		cin >> nombres[i] >> apellidosPaternos[i] >> apellidosMaternos[i];
		
		cout << nombres[i] << " ahora dime tu edad y tu genero: ";
		cin >> edades[i] >> generos[i];
        
		bool hombre = (generos[i] == "Masculino" || generos[i] == "Hombre" || generos[i] == "hombre" || generos[i] == "H" || generos[i] == "h") ? true : false;
		bool mujer = (generos[i] == "Femenino" || generos[i] == "Mujer" || generos[i] == "mujer" || generos[i] == "M" || generos[i] == "m") ? true : false;
        
		if (hombre && edades[i] < 7) {
			cursos[i] = "Taekwondo";
		} else if (hombre && edades[i] >= 7 && edades[i] <= 10) {
			cursos[i] = "Natacion";
		} else if (hombre && edades[i] >= 11 && edades[i] <= 15) {
			cursos[i] = "Futbol";
		} else if (hombre && edades[i] >= 16) {
			cursos[i] = "Ajedrez";
		}
		
		if (mujer && edades[i] < 7) {
			cursos[i] = "Gimnasia";
		} else if (mujer && edades[i] >= 7 && edades[i] <= 11) {
			cursos[i] = "Natacion";
		} else if (mujer && edades[i] >= 11 && edades[i] <= 15) {
			cursos[i] = "Futbol";
		} else if (mujer && edades[i] >= 12 && edades[i] <= 16) {
			cursos[i] = "Basquetbol";
		} else if (mujer && edades[i] > 16) {
            cursos[i] = "Tocho";
        }
        
        cout << "\n";
        
        vt.addRow(nombres[i], apellidosPaternos[i], apellidosMaternos[i], edades[i], generos[i], cursos[i]);
	}
    
    vt.print(cout);
    
	return 0;
}
