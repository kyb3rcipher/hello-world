/*
Calcular el promedio de tres calificaciones

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    int i = 1, calificacion, suma = 0, promedio;
    do {
        cout << "Dime la calificacion de la materia " << i << ": ";
        cin >> calificacion;
        suma += calificacion;
        i += 1;
    } while(i < 4);
    promedio = suma / 3;
    cout << "Tu promedio es: " << promedio << endl;
}
