# import random
from random import randint

for i in range(1,6):
    guess=int(input("Enter your guess between 1 to 7:"))

    r=randint(1,7)
    if r==guess:
        print("You guess the correct number")
    else :
        print("Opss! You guess the wrong number")
        print("The number was:",r)