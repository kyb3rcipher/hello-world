#include <iostream>
#include "libs/VariadicTable.h"
using namespace std;

int main(int argc, char *argv[]) {
	string nombre[5], status[5];
	float u1[5], u2[5], u3[5], promedio[5];
	
	for (int j = 0; j < 3; j++) {
		cout << "Dime tu nombres: ";
		cin >> nombre[j];
		cout << "Dime la calificaion de la unidad 1: ";
		cin >> u1[j];
		cout << "Dime la calificaion de la unidad 2: ";
		cin >> u2[j];
		cout << "Dime la calificaion de la unidad 3: ";
		cin >> u3[j];
		promedio[j] = (u1[j] + u2[j] + u3[j]) / 3;
		
		
		if (promedio[j] > 5.9) {
			status[j] = "APROBO";
		} else {
			status[j] = "REPROBO";
		}
	}
	
	VariadicTable<string, float, float, float, float, string> vt({"Nombre", "Unidad 1", "Unidad 2", "Unidad 3", "Promedio", "Status"}, 5);
	
	for (int i = 0; i < 3; i++) {
		vt.addRow(nombre[i], u1[i], u2[i], u3[i], promedio[i], status[i]);
	}

	vt.print(cout);

	return 0;
}

