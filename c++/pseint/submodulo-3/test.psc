// Se organizara un viaje, dependiendo el numero de alumnos que vayan sera el precio que pagaran,
// imprime cuanto pagara cada alumno y cuanto le pagaran a la agencia de viajes.
//
// Si son 100 alumnos o mas cada alumno pagara 700
// Si son 50 alumnos o mas cada alumno pagara 850
// Si son 30 alumnos o mas cada uno pagara 1200
// Si son menos de 30 alumnos se le pagara a la agencia 40000
//
// by: Kyb3r Cipher
Algoritmo test
// Pedir el numero de alumnos
Escribir "Dime el numero de alumnos: ";
Leer alumnos;

// Definir el pago por alumno dependiendo el numero de alumnos
Si (alumnos <= 0) Entonces
	Escribir "Error: No hay alumnos :v";
	//return 1;
FinSi
Si (alumnos >= 100) Entonces
	pago = 700;
FinSi
Si (alumnos >= 50) Entonces
	pago = 850;
FinSi
Si (alumnos >= 30) Entonces
	pago = 1200;
FinSi
Si (alumnos < 30) Entonces
	// Cuando el numero de alumnos sea menor a 30 calcula el pago de la agencia como
	// el pago a la agencia entre la cantidad[numero] de alumnos
	pago_agencia = 40000;
	pago = pago_agencia / alumnos;
FinSi

// Calcular el pago a la agencia si el numero de alumnos es mayor o igual a 30
Si (alumnos >= 30) Entonces
	pago_agencia = alumnos * pago;
FinSi

Escribir "\n=====================================================";
Escribir "El importe que debera pagar cada alumno es de: ", pago;
Escribir "El total que se le debe pagar a la agencia es: ",  pago_agencia;
Escribir "=====================================================";
FinAlgoritmo