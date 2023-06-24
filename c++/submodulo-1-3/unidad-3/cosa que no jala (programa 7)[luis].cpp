// Luis (Kang) problem
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int numeros[150], grupo1[150], grupo2[150], l, r;
	
	for(int k=150;k<=300;k+=2){
		r=grupo2[k]%2;
		if(r==0){
			grupo1[k]=numeros[k];
		}
	}
	
	/*
	for(int l=150;l<=300;l++){
		r=numeros[l]%2;
		if(r==1){
			grupo1[l]=numeros[l];
		}
	}*/
	/*cout<<"pares  impares  suma"<<endl;
	
	for(int k=150;k<=300;k+=2){
		cout<<grupo2[k]<<"   "<<grupo2[l]<<endl;
	}*/
	
	return 0;
}

