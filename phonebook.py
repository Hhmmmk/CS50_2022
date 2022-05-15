from cs50 import get_string

people = { #Curly braces for dictionaries
    "Carter": "+1-617-495-1000", #colon for associating keys with values
    "David": "+949-468-2750"
}

name = get_string("Name: ")
if name in people:
    number = people[name]
    print(f"Number: {number}")
