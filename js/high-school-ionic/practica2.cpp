#include <iostream>
using namespace std;

int main() {
    // Dado los valores de un triangulo, obtener el area correpondiente.

    int base, altura;
    cout << "=========================================================\n";
    cout << "Dime la base del triangulo: ";
    cin >> base;
    cout << "Dime la altura del triangulo: ";
    cin >> altura;
    cout << "El area de tu triangulo es: " << (base*altura)/2 << endl;
    cout << "=========================================================\n";

    return 0;
}