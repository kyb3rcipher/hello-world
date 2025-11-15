#include <iostream>
using namespace std;

int _celsius (int celcsius) {
    int fahrenheit;
    fahrenheit = (celcsius * 1.8) + 32;
    return fahrenheit;
}
int _farenheit (int fahrenheit) {
    int celsius;
    celsius = (fahrenheit - 32) / 1.8;
    return celsius;
}

int main() {
    int option;
    cout << "Escribe [1] para convertir fahrenheit a celsius y [2] para convertir celsius a fahrenheit: ";
    cin >> option;
    switch (option) {
        case 1:
            int farenheit;
            cout << "Dime los grados farenheit: ";
            cin >> farenheit;
            cout << _farenheit(farenheit) << endl;
            break;
        case 2:
            int celsius;
            cout << "Dime los grados celsius: ";
            cin >> celsius;
            cout << _celsius(celsius) << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }
}