#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Dame el valor 1: ";
    cin >> num1;
    cout << "Dime el valor 2: ";
    cin >> num2;
    if (num1==num2){
        cout << "Multiplicando: " << num1*num2 << endl;
    } else if (num1>num2) {
        cout << "Restando: " << num1-num2 << endl;
    } else {
        cout << "Sumando: " << num1+num2 << endl;
    }

    return 0;
}