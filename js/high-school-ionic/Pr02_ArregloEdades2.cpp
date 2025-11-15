/*
Practica 2: Array 2
Name: Kyb3r Cipher
Date: 17/05/2023
School: CBTIS 89 - 2A TM

Programa que almacena las edades en un arreglo.
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int edad[10];
    string nombre[10];
    //int arraySize = sizeof(edad) / sizeof(int);
    
    for (int i = 0; i < 10; i++) {
        cout << "Dime tu nombre y luego tu edad " << i << ": " << endl;
        cin >> nombre[i] >> edad[i];
    }
    
    cout << "\n==================================================" << endl;
    for (int j = 0; j < 10; j++) {   
        cout << j << ".- " << "La edad de " << nombre[j] << " es: " << edad[j] << endl;
    }
    
    return 0;
}

