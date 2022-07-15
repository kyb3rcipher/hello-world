# LOGICAL OPERATORS
# and 'or' not

# and: solo va a ser True cuando ambos son True
# yo quiero que me traigas peras **y[and]** manzanas, quiero las dos no solo una.
print("Orden: quiero peras and[y] manzanas")
print("Answer: Traigo peras pero no manzanas esta bien?:", True and False)
print("Answer: Traigo peras y manzanas tambien esta bien?:", True and True)

# or: solo va a ser False cuando ambos son False
# yo quiero peras que me traigas peras **o[or]** manzanas, me da igual quiero cualquiera o ambas
print("\nOrden: quiero peras o[or] manzanas, cualquiera de las dos, me da igual")
print("Answer: Traigo peras pero no manzanas esta bien?:", True or False)
print("Answer: No traigo peras pero traigo manzanas esta bien?:", False or True)
print("Answer: Traigo peras pero tambien traigo manzanas esta bien?:", True or True)
print("Answer: No traigo ni peras ni manzanas:", False or False)

# not: siempre sera en contrario
# yo no quiero manzanas
print("\nOrden: quiero peras no[not] manzanas")
print("Answer: Traigo peras esta bien?:", not False) #no traje mazanas (por eso el False de falso en manzanas)
print("Answer: Traigo manzanas:", not True) #traje mazanas (por eso el True de cierto en manzanas)
