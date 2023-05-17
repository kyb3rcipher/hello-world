/*
Practica 1: Array 1
Name: Kyb3r Cipher
Date: 17/05/2023
School: CBTIS 89 - 2A TM

Programa que almacena las edades en un arreglo.
*/ 
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int edad[10];
    
    cout << "Escribe la edad de una persona: ";
    cin >> edad[0];
    cout << "Escribe la edad de una persona: ";
    cin >> edad[1];
    cout << "Escribe la edad de una persona: ";
    cin >> edad[2];
    
    cout << "La edad almacenada en la pocision 0 es: " << edad[0] << endl;
    cout << "La edad almacenada en la pocision 1 es: " << edad[1] << endl;
    cout << "La edad almacenada en la pocision 2 es: " << edad[2] << endl;
    
    return 0;
}

