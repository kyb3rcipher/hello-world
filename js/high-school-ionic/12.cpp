/*
Calcular el pago que recibira un trabajador en una semana, el cual sera en base a los dias
trabajados. Datos de entrada: Pago diario y dias trabajados.

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    int pago, dias;
    
    cout << "Dime tu pago diario: ";
    cin >> pago;
    cout << "Dime tus dias trabajados en la semana: ";
    cin >> dias;
    
    if (dias > 7) {
        cout << "Error: Te pedi tus dias trabajados en una semana (maximo 7 dias)" << endl;
        return 1;
    } elif (dias < 0) {
        cout << "Error: No trabajaste :v"
        return 1;
    }
    
    cout << "Tu pago sera: " << pago * dias << endl;
    return 0;
}
