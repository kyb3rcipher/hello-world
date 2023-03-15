/*
Se organizara un viaje, dependiendo el numero de alumnos que vayan sera el precio que pagaran,
imprime cuanto pagara cada alumno y cuanto le pagaran a la agencia de viajes.

Si son 100 alumnos o mas cada alumno pagara 700
Si son 50 alumnos o mas cada alumno pagara 850
Si son 30 alumnos o mas cada uno pagara 1200
Si son menos de 30 alumnos se le pagara a la agencia 40000

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    // Declarar variables
    int alumnos, pago, pago_agencia;
    
    // Pedir el numero de alumnos
    cout << "Dime el numero de alumnos: ";
    cin >> alumnos;
    
    // Defirinir el pago por alumno dependiendo el numero de alumnos
    if (alumnos <= 0) {
        cout << "Error: No hay alumnos :v";
        return 1;
    } else if (alumnos >= 100){
        pago = 700;
    } else if (alumnos >= 50) {
        pago = 850;
    } else if (alumnos >= 30){
        pago = 1200;
    } else if (alumnos < 30) {
        // Cuando el numero de alumnos sea menor a 30 calcula el pago de la agencia como
        // el pago a la agencia entre la cantidad[numero] de alumnos
        pago_agencia = 40000;
        pago = pago_agencia / alumnos;
    }
    
    // Calcular el pago a la agencia si el numero de alumnos es mayor o igual a 30
    if (alumnos >= 30) {
        pago_agencia = alumnos * pago;
    }
    
    cout << "\n=====================================================" << endl;
    cout << "El importe que debera pagar cada alumno es de: " << pago << endl;
    cout << "El total que se le debe pagar a la agencia es: " << pago_agencia << endl;
    cout << "=====================================================" << endl;
    return 0;
}
