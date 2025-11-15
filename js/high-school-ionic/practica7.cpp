#include <iostream>
using namespace std;

int main() {
    string name;
    int number;
    int times;
    cout << "Dime tu nombre: ";
    cin >> name;
    cout << "Dime el numero de veces a imprimir: ";
    cin >> number;
    times = 1;
    while (times <= number) {
        cout << times << ".- " << name << endl;
        times = times + 1;
    }

    return 0;
}