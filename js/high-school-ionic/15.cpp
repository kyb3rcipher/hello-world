/*
Solicitar la edad y si la edad es mayor o igual a 18 imprimir "Mayor de edad"
de lo contrario imprimir "Menor de edad"

by: Kyb3r Cipher
*/
#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Dime tu edad: ";
    cin >> edad;
    
    if (edad > 18) {
        cout << "Mayor de edad" << endl;
    } else {
        cout << "Menor de edad" << endl;
    }
    
    return 0;
}
