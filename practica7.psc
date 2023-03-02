Algoritmo praqctica_7
	// Dado cualquier numero imprimir el nombre del alumno, tantas veces sea el numero dado
	Escribir "Dime tu nombre: ";
	Leer name;
	Escribir "Dame el numero de veces a imprimir";
	Leer number;
	Mientras times<=number Hacer
		Si times<>0 Entonces
			Escribir times,".-", name;
		Fin Si
		times<-times+1;
	Fin Mientras
FinAlgoritmo
