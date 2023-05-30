#include <iostream>
#include "libs/VariadicTable.h"
using namespace std;

int main(int argc, char *argv[]) {
	int edad[6],k,grupo1[6], grupo2[6],grupo3[6];
	string nombre[6];
	for (k=0; k<6; k++)
	{
		cout << "Ingresa tu nombre: ";
		cin >> nombre[k];
		cout << "Ingresa tu edad: "<<endl;
		cin >> edad[k];
		if (edad[k]<18)
		{
			grupo1[k] = 1;
			grupo2[k] = 0;
			grupo3[k] = 0;
		} else if (edad[k] >= 18 and edad[k] <= 49)
		{
			grupo1[k] = 0;
			grupo2[k] = 1;
			grupo3[k] = 0;
		} else if (edad[k]>=50)
		{
			grupo1[k] = 0;
			grupo2[k] = 0;
			grupo3[k] = 1;
		}
	}
		
		cout << nombre[k]<< edad[k]<<  grupo1[k] << grupo2[k] << grupo3[k] <<endl;
		cout<<endl;
		
		VariadicTable<string, int, int, int , int> vt({"Nombre", "edad", "grupo1", "grupo2", "grupo3"}, 10);
		
		for (k=0; k<6; k++)
		{
			vt.addRow(nombre[k], edad[k], grupo1[k], grupo2[k], grupo3[k]);
		}
		
		vt.print(cout);
	return 0;
}

