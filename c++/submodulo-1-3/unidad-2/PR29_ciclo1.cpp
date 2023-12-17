/*
Author: Kyb3r Cipher
Grade: 2A Programacion TM - CBTIS 89
Date: 04/04/2022

Programa que imprime 10 veces la palabra hola
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int i=0,j=0,a=0,m=0,k=0,par=0,sum=0;
	while(i<10)
	{i=i+1,cout<<i<<". Hola"<<endl;}
	cout<<" "<<endl;
	//imprimir numeros del 1 al 5
	while(j<5)
	{j++, cout<<j<<endl;}
	cout<<" "<<endl;
	//imprimir numeros pares del 2 al 20
	while(a<20)
	{a=a+2,cout<<a<<endl;}
	//seg ciclo pero suma al final
	cout<<" "<<endl;
	while(k<5)
	{k=k+1,m=m+k, cout<<k<<endl;}
	cout<<"Suma="<<m<<" "<<endl;
	cout<<" "<<endl;
	//suma pares
	while(par<20)
	{par=par+2,sum=sum+par,cout<<par<<endl;}
	cout<<"Suma="<<sum;
	return 0;}
