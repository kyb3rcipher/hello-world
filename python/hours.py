#!/bin/python3
from colorama import Fore, Style

hour = int(input('Tell me the hour: '))

if hour == 12:
  print("12 p.m.")
elif hour == 13:
  print("1 p.m.")
elif hour == 14:
  print("2 p.m.")
elif hour == 15:
  print("3 p.m.")
elif hour == 16:
  print("4 p.m.")
elif hour == 17:
  print("5 p.m.")
elif hour == 18:
  print("6 p.m.")
elif hour == 19:
  print("7 p.m.")
elif hour == 20:
  print("8 p.m.")
elif hour == 21:
  print("9 p.m.")
elif hour == 22:
  print("10 p.m.")
elif hour == 23:
  print("11 p.m.")
elif hour == 24:
  print("12 a.m.")
else:
  print(Fore.RED + "Error, put a correct 24-hour time!" + Style.RESET_ALL)
