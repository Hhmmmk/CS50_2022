# import get_int from cs50 library
from cs50 import get_int

# define main


def main():
    # get user input by calling get_height
    height = get_height()

    # loop printing accordign to entered height
    for i in range(height):
        bricks = i + 1
        spaces = height - 1
        print(" " * spaces + "#" * bricks)
        height -= 1
        bricks += 1

# defining get_height


def get_height():
    # do while loop till user complies
    while True:
        try:
            height = get_int("Height: ")
            if height > 0 and height < 9:
                break
        except:
            print("Enter a valid number")
    return height

main()

