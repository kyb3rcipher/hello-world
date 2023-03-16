// De 30 alumnos obtener las aportaciones  de 10, 15 y 20 pesos
// para conocer cuantos alumnos aportan cada una de las cantidades
// y su aportacion total
//
// by: Kyb3r Cipher
Algoritmo aportaciones_dinero
    // Declarar vairables
    aportacion10 = 0
	aportacion15 = 0
	aportacion20 = 0
	aportacion_others = 0;
    
    // Pedir la aportacion de dinero del alumno (se repite 30 veces 1 por cada alumno)
	Para i = 1 Hasta 30 Con Paso 1 Hacer
		Repetir
			Escribir "Dame la aportacion del alumno ", i, ": ";
			Leer aportacion;
		Hasta Que aportacion > 0;
		
		// Ir agregando alumnos a su variable de contribucion
		Si (aportacion == 10) Entonces
			aportacion10 = aportacion10 + 1;
		FinSi
		Si (aportacion == 15) Entonces
			aportacion15 = aportacion15 + 1;
		FinSi
		Si (aportacion == 20) Entonces
			aportacion20 = aportacion20 + 1;
		FinSi
	FinPara
    
    // Imprimir datos
    Escribir "=====================================================";
    Escribir "Los alumnos que aportaron $10 fueron: ", aportacion10;
    Escribir "Los alumnos que aportaron $15 fueron: ", aportacion15;
    Escribir "Los alumnos que aportaron $20 fueron: ", aportacion20;
    Escribir "Los alumnos que aportaron otra cantidad fueron: ", aportacion_others;
    Escribir "El total es de: ", (aportacion10 * 10) + (aportacion15 * 15)+ (aportacion20 * 20) + aportacion_others;
    Escribir "=====================================================";
FinAlgoritmo
