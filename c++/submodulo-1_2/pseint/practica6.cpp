#include <iostream>
using namespace std;

int main() {
    // Dado cualquier numero
    // Sumar los numeros 1 hasta el numero dado
    int number, suma = 1;
    cout << "Dime el numero: ";
    cin >> number;
    while (suma != number) {
        suma += 1;
    }
    cout << "El total de la suma de los valores es: " << suma << endl;

    return 0;
}