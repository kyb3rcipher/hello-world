/*
Leer un numero e indicar si es positivo, negativo o cero

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Dime el numero: ";
    cin >> num;
    
    if (num == 0) {
        cout << "El numero es cero" << endl;
    } else if (num > 0){
        cout << "El numero es positivo" << endl;
    } else {
        cout << "El numero es negativo" << endl;
    }
    return 0;
}
