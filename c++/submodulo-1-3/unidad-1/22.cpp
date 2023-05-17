/*
Calcular e imprimir el sueldo semanal de un trabajar tomando como datos
de entrada los dias trbajados y al sueldo diario. Considerando lo siguiente:
si el empleado trabajo mas de 5 dias se le dara un pago extra de 100 pesos,
en caso contrario solo recibe su sueldo por los dias trabajados

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    int dias, sueldo, pago, extra = 0;
    
    cout << "Dime tus dias trabajados: ";
    cin >> dias;
    cout << "Dime tu sueldo diario: ";
    cin >> sueldo;
    pago = dias * sueldo;
    
    if (dias > 5) {
        extra = 100;
    }
    
    cout << "Tu pago es de: " << pago << endl;
    cout << "Tu pago extra es de: " << extra << endl;
    cout << "Tu pago total es de: " << pago + extra << endl;
    return 0;
}
