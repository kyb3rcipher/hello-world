# WHILE
# El siclo while se repeteria siempre hasta que se cumpla una condicion, ejemplo:
# Si alguien quiere peras el siempre las pediras hasta que se las traigan, una vez las tenga se detendra.
# while - mientras [que]

i = 0

while i <= 9:
    print(i)
    i = i + 1

fruit = "manzana" 

print("\nI want pera")
while fruit != "pera":
    print("The fruit is:", fruit)
    fruit = input("Fruit?: ")
print("I love peras")
