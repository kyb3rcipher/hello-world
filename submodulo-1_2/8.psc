Algoritmo ocho
	Escribir "Dime tu peso: ";
	Leer peso;
	Escribir "Dime tu altura: ";
	Leer altura;
	imc = peso / (altura * altura);
	Si (imc < 18) Entonces
		Escribir "Anorexia";
	FinSi
	Si (imc >= 18) & (imc < 20) Entonces
		Escribir "Delgadez";
	FinSi
	Si (imc >= 20) & (imc < 27) Entonces
		Escribir "Normal";
	FinSi
	Si (imc >= 27) & (imc < 30) Entonces
		Escribir "Obesidad (grado 1)";
	FinSi
	Si (imc >= 30) & (imc < 35) Entonces
		Escribir "Obesidad (grado 2)";
	FinSi
	Si (imc >= 35) & (imc < 40) Entonces
		Escribir "Obesidad (grado 3)";
	FinSi
	Si (imc >= 40) Entonces
		Escribir "Obesidad morbida";
	FinSi
	Escribir "Tu Indice de Masa Corporal (IMC) es de: ", imc;
FinAlgoritmo