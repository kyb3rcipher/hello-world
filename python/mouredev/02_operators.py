### Aritmetic operators ###

print(3 + 4)
print(3 - 4)
print(3 * 4)
print(3 / 4)
print(10 % 3)
print(10 // 3)
print(2 ** 3)
print(2 ** 3 + 3 - 7 / 1 // 4)

# Opearations with text strings
print("Hola " + "Python " + "How are you?")
print("Hola " + (str(5)))

print("Hola " * 5)
print("Hola " * (2 ** 3))

my_float = 5.5 * 2  # = 5.0, so convert to int
print("Hola " * int(my_float))

### Comparative operators ###
print(3 > 4)
print(3 < 4)
print(3 >= 4)
print(4 <= 4)
print(3 == 4)
print(3 != 4)

# (Count character letter in abecedary for compare)
print("Hola" > "Python")
print("Hola" < "Python")
print("aaaa" >= "abaaa")  # alfabethic order for ASCII
print(len("aaaa") >= len("abaaa"))  # count characters order without caps
# len() is for count a text amount
print("Hola" <= "Python")
print("Hola" == "Python")
print("Hola" != "Python")

### Logic operators ###
# Based in Boole Algebra https://es.wikipedia.org/wiki/%C3%81lgebra_de_Boole
print(3 > 4 and "Hola" > "Python")
print(3 > 4 or "Hola" > "Python")
print(3 < 4 and "Hola" < "Python")
print(3 < 4 or "Hola" < "Python")
print(3 < 4 or ("Hola" > "Python" and 4 == 4))
print(not(3 > 4))
