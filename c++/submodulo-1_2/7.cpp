/*
Calcular el promedio de la edad de cuatro personas

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    int edad, promedio = 0;
    for (int i = 1; i <= 4; i++) {
        cout << "Dime la edad de la persona " << i << ": ";
        cin >> edad;
        promedio += edad;
    }
    cout << "El promedio de las edades es: " << promedio << endl;
}
