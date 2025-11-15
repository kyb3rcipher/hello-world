/*
Author: Kyb3r Cipher
Grade: 2A Programacion TM - CBTIS 89
Date: 03/29/2022

Calcular factorial
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num;
	cout << "Ingrese un número entero positivo: ";
	cin >> num;
	
	int fact = 1;
	cout << num << "! = ";
	for (int i = 1; i <= num; i++) {
		fact *= i;
		cout << i;
		if (i < num) {
			cout << " x ";
		}
	}
	cout << " = " << fact << endl;
	return 0;
}

