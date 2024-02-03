Algoritmo siete
	Escribir "Cuantos dias has trabajado?: ";
	Leer dias;
	Escribir "Cual es tu sueldo diario?: ";
	Leer sueldo;
	Si (dias >= 5) Entonces
		extra = 100;
	SiNo
		extra = 0;
	FinSi
	Escribir "Tu pago extra es de: ", extra;
	Escribir "Tu pago total es de: ", (dias*sueldo)+extra;
FinAlgoritmo