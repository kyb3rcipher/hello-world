// Dada las cantidades y precios de 10 articulos, obtener el total de las ventas considereando lo siguiente:
// si la compra es mayor a 1000 hacer un descuento del 20%
// si la compra es menor de 500 y mayor de 300 haer un descuento del 5%
// si la compra es menor o igual a 300 no se hara ningun descuento
// si la compra es mayor a 500 hacer un descuento del 10%
//
// Calcular el subtotal y el Impuesto al Valor Agregado (IVA)
// Obtener el total de la compra
//
// by: Kyb3r Cipher
Algoritmo articulos_iva
i = 1
compra = 0
pago = 0

// Solicitar el precio y cantidad de los articulos
Repetir
	Escribir "Dame el precio del articulo ", i, ": ";
	Leer precio;
	Escribir "Dame la cantidad del articulo ", i, ": " ;
	Leer cantidad;
	pago = precio * cantidad;
	compra = compra + pago;
	i = i + 1;
Hasta Que i <> 11;

// Calcular el descuento de la compra dependiento el total de esta
Si (compra > 1000) Entonces
	descuento = compra * 0.20;
FinSi
Si (compra > 500) Entonces
	descuento = compra * 0.10;
FinSi
Si (compra > 300) Entonces
	descuento = compra * 0.05;
SiNo
	descuento = compra * 0;
FinSi

// Calcular el IVA y el total a pagar
subtotal = compra - descuento;
_iva = subtotal * 0.16;
total_pagar = subtotal + _iva;

// Imprmir el pago total y el IVA
Escribir "\n===========================================";
Escribir "El IVA de los articulos es: ", _iva;
Escribir "El total a pagar de los articulos es: ", total_pagar;
Escribir "===========================================";
FinAlgoritmo
