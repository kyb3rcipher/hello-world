/*
Comparar dos numeros e indicar si son iguales o diferentes

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Dime el numero 1: ";
    cin >> num1;
    cout << "Dime el numero 2: ";
    cin >> num2;
    
    if (num1 == num2) {
        cout << "Los numeros son iguales";
    } else {
        cout << "Los numeros son diferentes";
    }
    return 0;
}
