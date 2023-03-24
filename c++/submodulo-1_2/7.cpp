/*
Calcular el promedio de la edad de cuatro personas

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    int edad1, edad2, edad3, edad4, promedio = 0;
    
    cout << "Dime la edad de la persona 1: ";
    cin >> edad1;
    cout << "Dime la edad de la persona 2: ";
    cin >> edad2;
    cout << "Dime la edad de la persona 3: ";
    cin >> edad3;
    cout << "Dime la edad de la persona 4: ";
    cin >> edad4;
    
    promedio = (edad1 + edad2 + edad3 + edad4) / 4;
    
    cout << "El promedio de las edades es: " << promedio << endl;
}
