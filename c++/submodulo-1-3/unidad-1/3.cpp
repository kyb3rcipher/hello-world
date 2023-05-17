/*
Calcular el promedio de tres calificaciones

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    int calificacion1, calificacion2, calificacion3, suma, promedio;
        
    cout << "Dime la calificacion de la materia 1: ";
    cin >> calificacion1;
    cout << "Dime la calificacion de la materia 2: ";
    cin >> calificacion2;
    cout << "Dime la calificacion de la materia 3: ";
    cin >> calificacion3;
    suma = calificacion1, calificacion2, calificacion3;
    
    promedio = suma / 3;
    cout << "Tu promedio es: " << promedio << endl;
}
