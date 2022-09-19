ph = int(input("What is the ph value? (0-14): "))

if ph >= 7:
  print("Basic")
elif ph < 7:
  print("Acid")
else:
  print("Neutral")
