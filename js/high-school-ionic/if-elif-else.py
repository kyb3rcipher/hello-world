# IF ELIF ELSE

##  IF 
"""""
if 2 < 5:
    print("2 is minor of 5")

if 2 > 5:
    print("2 is mayor of 5")
"""""
# EJERCICIO
age = int(input("How old are you?: "))
# int es para guardarlo como entero (numero), de otra manera esto sera una palabra (string,str)

if age <= 0:
    print("Born first!")
elif age <= 17:
    print("minor :3")
elif age <= 59:
    print("legal man?, buy me a some candies")
elif age >= 60:
    print("okay boomer!.")
else:
    print("no c q hacer")
