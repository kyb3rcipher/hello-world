Algoritmo diez
Definir cheque, billete1000, billete500, billete200, billete100, billete50, billete20, moneda10, moneda5, moneda2, moneda1 Como Entero;

// Pedir al usuario el monto del cheque
Escribir "Ingrese el monto del cheque: ";
Leer cheque;

// Realizar la conversi?n a billetes y monedas
billete1000 = trunc(cheque / 1000)
cheque = cheque % 1000
billete500 = trunc(cheque / 500)
cheque = cheque % 500
billete200 = trunc(cheque / 200)
cheque = cheque % 200
billete100 = trunc(cheque / 100)
cheque = cheque % 100
billete50 = trunc(cheque / 50)
cheque = cheque % 50
billete20 = trunc(cheque / 20)
cheque = cheque % 20
moneda10 = trunc(cheque / 10)
cheque = cheque % 10
moneda5 = trunc(cheque / 5)
cheque = cheque % 5
moneda2 = trunc(cheque / 2)
cheque = cheque % 2
moneda1 = cheque

// Mostrar los billetes y monedas resultantes
Escribir "Billetes de 1000: ", billete1000;
Escribir "Billetes de 500: ", billete500;
Escribir "Billetes de 200: ", billete200;
Escribir "Billetes de 100: ", billete100;
Escribir "Billetes de 50: ", billete50;
Escribir "Billetes de 20: ", billete20;
Escribir "Monedas de 10: ", moneda10;
Escribir "Monedas de 5: ", moneda5;
Escribir "Monedas de 2: ", moneda2;
Escribir "Monedas de 1: ", moneda1;
FinAlgoritmo
