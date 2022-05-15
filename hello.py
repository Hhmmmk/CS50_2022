#import while library
import cs50

#import specific functions in a library
from cs50 import get_string

#printing
print("hello, world")


#getting user input and printing
answer = get_string("What's your name? ")
print(f"hello, {answer}")


#assignment
counter = 0


#increment
counter = counter + 1

counter += 1


#conditionals
if x < y:
    print("x is less than y")
elif x > y:
    print("x is greater than y")
else:
    print("x is equal to y")


#loops
i = 0
while i < 3:
    print("meow")
    i +=1

for i in [0, 1, 2]:
    print("hello, world")

for i in range(3):
    print("hello, world")

while True:
    print("meow")
