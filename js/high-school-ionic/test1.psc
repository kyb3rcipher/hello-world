// Un empleado trabaja normalmente 8 horas al dia por 5 dias a la semana, 
// es decir 40 goras semanaes , sin embargo, algunos empleados trabajan horas extra 
// y estas se pagan al doble de las horas normales.
//
// Imprmir su pago extra y su pago total.
Funcion line_break
	Escribir "   ";
Fin Funcion

Algoritmo examen1
	
	// Solicitar el pago por dia y las horas trabajadas
	Escribir "Dime cuanto te pagan por dia: ";
	Leer pago;
	Escribir "Dime cuantas horas trabajaste a la semana: ";
	Leer horas;
	
	// Calcular el pago por hora y el pago por las horas extras
	pago_hora = pago / 8;
	pago_hora_extra = pago_hora * 2;
	
	// Detectar si hay horas extra y calcular el pago por estas
	horas_extra = 0;
	Si (horas > 40) Entonces
		horas_extra = horas - 40;
	FinSi
	pago_extra = horas_extra * pago_hora_extra;
	
	// Imprimir pagos y horas extras
	line_break()
	Escribir horas, " - horas trabajadas | ", horas_extra, " - horas extra";
    Escribir pago_hora, " - pago por hora    | ", pago_hora_extra, " - pago por hora extra \n";
	
	line_break();
    Escribir "Pagos:";
	Escribir "Horas extra = ", pago_extra;
	Si (horas >= 40) Entonces
		Escribir "Total = ", (pago_hora * 40) + pago_extra;
	SiNo
		Escribir "Total = ", (pago_hora * horas) + pago_extra;
	FinSi
FinAlgoritmo
