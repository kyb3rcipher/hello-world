# Variables

my_string_variable = "My string variable"
print(my_string_variable)

my_int_variable = 5
print(my_int_variable)

my_int_to_str_variable = str(my_int_variable)
print(my_int_to_str_variable)
print(type(my_int_to_str_variable))

my_string_to_int_variable = int(my_int_to_str_variable)
print(my_string_to_int_variable)
print(type(my_string_to_int_variable))

my_bool_variable = False
print(my_bool_variable)

# Concatenación de variables en un print
print(my_string_variable, my_int_variable, my_bool_variable)
print("This is the value of:", my_bool_variable)
print("The characters numbers of $my_string_variable is:", len(my_string_variable))

# Some system functions
print(len((my_string_variable)))

# Variables in one lines ¡Caution!
name, surname, alias, age = "Kyb3r", "Cipher", 'Kyba', 35
print("My name is:", name, surname, "My age is:", age, "and my alias is:", alias)

# Inputs
# name = input('What is your name? ')
# age = input('How old are you? ')
# print(name)
# print(age)

# Change the type
name = 35
age = "Kyb3r"
print(name, age)

# Forcing the type?
address: str = "My adress"
adress = 5
adress = True
adress = 1.2
print(type(adress))
