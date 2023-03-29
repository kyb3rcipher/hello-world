/*
Comparar dos numeros, y en caso de ser iguales imprimir el mensaje
"Los numeros son iguales", pero en caso de ser diferentes imprimir cual es
el mayor y cual es el menor

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
    } else if (num1 > num2){
        cout << "El numero 1 es mayor al numero 2";
    } else if (num2 > num1) {
        cout << "El numero 2 es mayor al numero 1";
    }
    return 0;
}
