gryffindor = 0
ravenclaw = 0
hufflepuff = 0
slytherin = 0

#------------- QUESTION 1 --------------
print("Do you like Dawn or Dusk?")
print("1) Dawn")
print("2) Dusk")

answer = int(input("Answer: "))
if answer == 1:
  gryffindor += 1
  ravenclaw += 1
elif answer == 2:
  slytherin += 1
  hufflepuff += 1
else:
  print("Wrong input.")

print("\n") #line-break
#------------- QUESTION 2 --------------
print("When I’m dead, I want people to remember me as:")
print("1) The Good")
print("2) The Great")
print("3) The Wise")
print("4) The Bold")

answer = int(input("Answer: "))
if answer == 1:
  hufflepuff += 1
elif answer == 2:
  slytherin += 1
elif answer == 3:
  ravenclaw += 1
elif answer == 4:
  gryffindor += 1
else:
  print("Wrong input.")

print("\n") #line-break
#------------- QUESTION 3 --------------
print("Which kind of instrument most pleases your ear?")
print("1) The violin")
print("2) The trumpet")
print("3) The piano")
print("4) The drum")

answer = int(input("Answer: "))
if answer == 1:
  slytherin += 1
elif answer == 2:
  hufflepuff += 1
elif answer == 3:
  ravenclaw += 1
elif answer == 4:
  gryffindor += 1
else:
  print("Wrong input.")

print("\n") #line-break
#------------- DECISION --------------
if ravenclaw >= gryffindor and ravenclaw >= slytherin and ravenclaw >= hufflepuff:
  print("🦅 Ravenclaw!!! The fxcking best house!")
elif gryffindor >= slytherin and gryffindor >= hufflepuff:
  print("🦁 Gryffindor!")
elif slytherin >= hufflepuff:
  print("🐍 Slytherin!")
else:
  print("🦡 Hufflepuff")
