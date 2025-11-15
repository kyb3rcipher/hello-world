/*
Author: Kyb3r Cipher
Grade: 2A Programacion TM - CBTIS 89
Date: 04/04/2022

Por medio de un ciclo for imprimir la siguiente secuencia numerica: 2, 4, 8, 16
32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero = 2;
	
	for (int i = 0; i < 15; i++) {
		cout << numero << " ";
		numero *= 2;
	}
	
	cout << endl;
	return 0;
}
