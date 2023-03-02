Algoritmo practica_9
	Escribir "Ingresa el numero de materias: ";
	Leer num_materias;
	suma_calificaciones=0;
	Escribir "Escribe 1 [para] Para y 2 [para] Repetir: ";
	Leer option;
	Segun option Hacer
		1:
			Para i=1 Hasta num_materias Con Paso 1 Hacer
				Escribir "Ingresa la calificacion de la materia ", i;
				Leer calificacion;
				suma_calificaciones=suma_calificaciones+calificacion;
			FinPara
		2:
			Repetir
				i=i+1;
				Escribir "Ingresa la calificacion de la materia ", i;
				Leer calificacion;
				suma_calificaciones=suma_calificaciones+calificacion;
			Hasta Que i==num_materias
		De Otro Modo:
			Escribir "Opcion invalida"
	FinSegun
	promedio=suma_calificaciones/num_materias;
	Escribir "El promedio es: ", promedio;
FinAlgoritmo
