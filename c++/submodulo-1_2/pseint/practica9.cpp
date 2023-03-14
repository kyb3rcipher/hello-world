#include <iostream>
using namespace std;

int main() {
    int num_materias, option, i = 1, calificacion, suma_calificaciones = 0, promedio;
    cout << "Ingresa el numero de materias: ";
    cin >> num_materias;
    cout << "Escribr 1 para usar el ciclo [while] y 2 para el ciclo [do]: ";
    cin >> option;
    switch (option) {
        case 1:
            for (int i = 1; i <= num_materias; i++) {
                cout << "Ingresa la calificion de la materia " << i << ": ";
                cin >> calificacion;
                suma_calificaciones += calificacion;
            }
            break;
        case 2:
            do {
                cout << "Ingresa la calificion de la materia " << i << ": ";
                cin >> calificacion;
                i++;
                suma_calificaciones += calificacion;
            } while (i <= num_materias);
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }
    promedio = suma_calificaciones / num_materias;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}