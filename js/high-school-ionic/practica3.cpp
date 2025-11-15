#include <iostream>
using namespace std;

int main() {
    // Dado dos valores numericos conocer cual es el mayor.

    int num1, num2;
    cout << "Dime el primer valor: ";
    cin >> num1;
    cout << "Dime el segundo valor: ";
    cin >> num2;
    if (num1>num2){
        cout << "El primer valor es mayor.";
    } else {
        cout << "El segundo valor es menor.";
    }

    return 0;
}