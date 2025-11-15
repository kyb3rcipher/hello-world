/*
Calcular el promedio de 3 calificaciones e imprmir
si esta reprobado o aprovado

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    float calificacion1, calificacion2, calificacion3, promedio;
    
	cout << "Dime la calificacion 1: ";
    cin >> calificacion1;
	cout << "Dime la calificacion 2: ";
    cin >> calificacion2;
	cout << "Dime la calificacion 3: ";
    cin >> calificacion3;
    
    promedio = (calificacion1 + calificacion2 + calificacion3) / 3;

    if (promedio < 6) {
        cout << "Estas reprobado";
    } else {
        cout << "Estas aprobado";
    }
	return 0;
}

