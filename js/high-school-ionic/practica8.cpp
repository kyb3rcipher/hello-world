#include <iostream>
using namespace std;

int main() {
    string name;
    int veces, i = 1;
    cout << "Dime tu nombre: ";
    cin >> name;
    cout << "Dime cuantas veces lo voy a imprimir: ";
    cin >> veces;
    do {
        cout << i << ".- " << name << endl;
        i++;
    } while (i <= veces);

    return 0;
}