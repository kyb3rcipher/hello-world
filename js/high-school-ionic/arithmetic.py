# Arithmetic operations
# Operations: + - * / // ** %
# PEMDAS: Parentesis, Expontes, Multiplicacion/Division/Division Enteros mdoulo, Suma/Resta
# 5 + 2 * 2 - primero multiplicara 2x2 por que la multiplicacion tiene mayor prioridad que la suma
# 5 + 4 = 9
x = 5
y = 2

suma = x + y
print("Cinco + dos es:", suma)

rest = x - y
print("\nLa substraction de cinco - dos es:", rest)

multiplication = x * y
print("\nLa multiplicacion de 5 x 2 es:", multiplication)

division = x / y
print("\nLa division de 5 entre 2 es:", division)
division_enteros = x // y
print("La division de 5 entre 2 sin enteros es:", division_enteros)
modulo = x % y
print("El residuo de la division de 5 entre 2 es:", modulo)

potencia = x ** y #5^2=x^y=5x5
print("\nLa potencia de 5 elevado a la 2 es:", potencia, "(que es 5x5 xD)")
