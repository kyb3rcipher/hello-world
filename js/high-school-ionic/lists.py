# LISTS (LISTAS)
#lista => [1,2,3,4,5]

'''
# indices:       0,1,2,3,4,5,6,7,8
lista_numeros = [1,2,3,4,5,6,7,8,9]

numero = lista_numeros[8]
print(numero)

lista_numeros[8] = 100
numero = lista_numeros[8]
print(numero)

print("Lista: ", lista_numeros)

# obtener tamaño de la lista
# para obtener en tamaño de la lista usamos: len([lista])
print("En total la lista tiene", len(lista_numeros), "elementos.")

# agrgar valor 99 al final de la lista
lista_numeros.append(99)
print("\nLista: ", lista_numeros)

# obtener el tamño de la lista
tamano = (len(lista_numeros))
print("\nEn total la lista tiene", tamano, "elementos.")

# crea una variable numero con cada valor de la lista
for numero in lista_numeros:
   print(numero)

print("Terminamos de imprimir los elementos de la lista")
'''

# EJERCICIO
# De la lista normal obtener otra lista con los valores originales multiplicados por 2.
lista = [1,2,3,4,5]
lista_multiplicada = []
#lista_multiplicada = [lista[0]*2, lista[1]*2, lista[2]*2, lista[3]*2, lista[4]*2]

for num in lista:
    new_value = num * 2
    lista_multiplicada.append(new_value)
print(lista_multiplicada)
