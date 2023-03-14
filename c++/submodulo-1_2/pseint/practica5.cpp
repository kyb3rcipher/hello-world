#include <iostream>
using namespace std;

int main() {
    // Dado los nueros de la semana.
    // Se imprima el nombre del dia corrrepondiente.
    int dia;
    cout << "Dame un el numero de la semana <1-7>: ";
    cin >> dia;
    switch (dia) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sabado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "Dia de la semana no valido";
    }

    return 0;
}