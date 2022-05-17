from cs50 import get_string
import re
import string

# get user input for text
text = get_string("Text: ").upper()

# detecting spaces in the text

spaces = 0
for i in range(len(text)):
    if text[i] == " ":
        spaces += 1


punctuations = 0
for j in text:
    if j in string.punctuation:
        punctuations += 1


# count letters
letters = len(text) - spaces - punctuations


# counting words
words = len(text.split())


# count sentences
sentences = len(re.split(r'[.!?]+', text)) - 1


# applying Coleman-Liau index
L = float((letters / words) * 100)
S = float((sentences / words) * 100)
index = (0.0588 * L) - (0.296 * S) - 15.8


# round-off final
final = round(index)


if final < 1:
    print("Before Grade 1")
    exit()

if final <= 16:
    print(f"Grade {final}")
    exit()

if final > 16:
    print("Grade 16+")
    exit()

