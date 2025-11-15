/*CBTIS 89
	Programación 2ºA T.M.
	Verónica Martínez Anaya
	17 de mayo de 2023
	Programa que almacena datos en cinco arreglos: 
    Alumnos, U1, U2, U3, Promedio. Por medio de un ciclo 
    debe solicitar 5 registros, al final por medio 
    de otro ciclo debe imprimir el contenido de todos los arreglos.
*/ 
#include <iostream>
#include "libs/VariadicTable.h"
using namespace std;
int main(int argc, char *argv[]) {
	string alumnos[10], Status[10];
	float Uni1[10], Uni2[10], Uni3[10], Promedio[10];
	int k;
	
	for(k=0;k<3;k++)
	{cout<<"Escribe el nombre del alumno ";
	cin>>alumnos[k];
	cout<<"Escribe su calificacion de la unidad 1:  ";
	cin>>Uni1[k];
	cout<<"Escribe su calificacion de la unidad 2:  ";
	cin>>Uni2[k];
	cout<<"Escribe su calificacion de la unidad 3:  ";
	cin>>Uni3[k];
	
	Promedio[k]=(Uni1[k]+Uni2[k]+Uni3[k])/3;
	if(Promedio[k]>=6)
	{Status[k]="Aprobado";}
	else
	{Status[k]="Reprobado";}
	}
	
	cout<<endl;
	VariadicTable<string, float, float, float, float, string> 
		vt({"Nombre", "Uni1", "Uni2", "Uni3", "Promedio", "Status"}, 10);
	
	for(k=0;k<3;k++)
	{vt.addRow(alumnos[k], Uni1[k], Uni2[k], Uni3[k], Promedio[k], Status[k]);}
	
	vt.print(cout);
		
	return 0;
}

