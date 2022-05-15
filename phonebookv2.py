import csv
from cs50 import get_string

file = open("phonebook.csv", "a")

name = get_string("Name: ")
number = get_string("Number: ")

writer = csv.writer(file)

writer.writerow([name, number])

file.close()



#other way to do it
name = get_string("Name: ")
number = get_string("Number: ")

with open("phonebook.csv", "a") as file: #a stands for append which adds to the bottom of it
    writer = csv.writer(file)
    writer.writerow([name, number])


#reading csv
houses = {
    "Griffindor": 0,
    "Hufflepuff": 0,
    "Ravenclaw": 0,
    "Slytherin": 0
}
with open("hogwarts.csv", "r") as file:
    reader = csv.DictReader(file)
    next(reader) #next -- ignores the first line of the file
    for row in reader:
        house = row["House"]
        houses[house] += 1
for house in houses:
    count = houses[house]
    print(f"{house}: {count}")