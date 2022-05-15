from sys import argv

if len(argv) == 2:
    print(f"hello, {argv[1]}")
else:
    print("hello, world")

for arg in argv[1:]: #starting from specific number in list to the end
    print(arg)

for arg in argv[:-1]: #removing value in the end of the list
    print(arg)