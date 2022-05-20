import csv
import re # regular expression library


titles = {} # initiate dictionary of titles
# open csv
with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        title = row["title"].strip().upper() # strip off whitespaces from start and end
        if not row["title"] in titles: #if title is not in titles, add it to list of titles
            titles[title] = 1
        else:
            titles[title] += 1

for title in titles:
    print(title, title[title])


