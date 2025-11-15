#include <iostream>
using namespace std;

int main() {
    // Dado dos valores numericos hacer la suma de estos.
    int num1, num2, resultado;

    cout << "=========================================================\n";
    cout << "Dame el primer valor: ";
    cin >> num1;
    cout << "Dame el segundo valor: ";
    cin >> num2;
    resultado=num1+num2;
    cout << "El resultado de la suma de estos numeros es: " << resultado << endl;
    cout << "=========================================================\n";

    return 0;
}