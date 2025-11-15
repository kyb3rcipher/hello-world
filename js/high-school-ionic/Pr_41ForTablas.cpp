/*
Author: Kyb3r Cipher
Grade: 2A Programacion TM - CBTIS 89
Date: 03/29/2022

Programa que imprima por medio de un ciclo for las tablas de multiplicar
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num, total;
	cout<<"Cual tabla de multiplicar quieres: ";
	cin>>num;
	for(int i=1;i<=10;i++)
	{
		total=num*i;
		cout<<""<<num<<"x"<<i<<"="<<total<<endl;}
	return 0;
}

