Algoritmo nueve
	Escribir "Dime cuantos a?os has trabajado: ";
	Leer years;
	Escribir "Dime tu salario mesual: ";
	Leer salario;
	Si (years < 1) Entonces
		utilidad = 0.05;
	FinSi
	Si (years >= 1) & (years < 2) Entonces
		utilidad = 0.07;
	FinSi
	Si (years >= 2) & (years < 5) Entonces
		utilidad = 0.10;
	FinSi
	Si (years >= 5) & (years < 10) Entonces
		utilidad = 0.15;
	FinSi
	Si (years >= 10) Entonces
		utilidad = 0.20;
	FinSi
	meses = (years * 12) / 1;
	Escribir "Tu salario mensual es de: ", salario;
	Escribir "Tu utilidad es de: ", utilidad;
	Escribir "Tu pago total es de: ", (salario*meses)*utilidad;
FinAlgoritmo
