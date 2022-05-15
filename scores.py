from cs50 import get_int

scores = []

for i in range(3):
    score = get_int("Score: ")
    scores.append(score)
    #can also combine lists sample --->  scores = scores + [score]

average = sum(scores) / len(scores)

print(f"Average: {average:.2f}")