### String ###

my_string = "My String"
my_other_string = 'My other String'
print(len(my_string))
print(len(my_other_string))

print(my_string + " " + my_other_string)

my_new_line_string = "This is a String\nwith like break"
print(my_new_line_string)

my_tab_string = "\tThis is a String with tabutlation"
print(my_tab_string)

my_escaped_string = "\\tThis is a String \\n escaped"
print(my_escaped_string)

### Formatting ###
name, surname, age = "Kyb3r", "Cipher", 35
print("My name is: {} {} and my age is: {}".format(name, surname, age))
print("My name is: %s %s and my age is: %d" %(name, surname,age))  # best way
#print("My name is: " + name + " " + surname, "and my age is:", + age)  # incorrect way, cuz nms is more hard duh!
print(f"My name is: {name} {surname} and my age is: {age}")  # best way if u no are Formatting

# Accesing character by index
language = "python"
#           012345
a, b, c, d, e, f = language
print(a)
print(e)
print(f)
print(c)

# Division
language_slide = language[1:5]
print(language_slide)

language_slide = language[1:3]
print(language_slide)

language_slide = language[-2]  # Starting with end PythOn
print(language_slide)

language_slide = language[0:6:2]
print('hey')
print(language_slide)

language_slide = language[0:6]
print(language_slide)

# Reverse
language_reverse = language[::-1]
print(language_reverse)

# Functions
print(language.capitalize())  # First letter in capitalize
print(language.upper())      # All caps
print(language.lower())      # All lowercases
print(language.count("t"))  # Count how many letters t has the string
print(language.isnumeric())  # "python" is numeric?
print("1".isnumeric())  # "1" is numeric? (whatever if string or int just is a number?)
print(language.upper().isupper())  # First convert text to caps, then check if are caps
print(language.lower().isupper())
print(language.lower().islower())  # First convert text to lowercases, then check if are lowercases
print(language.startswith("py"))   # "python" start with "py"
print(language.startswith("Py"))   # "python" start with "Py" (the caps, no are the same!!!)
print("Py" == "py")
