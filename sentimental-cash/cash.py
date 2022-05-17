# defining main
def main():
    # asking user input in dollars
    dollars = get_dollars()

    # convert dollars to cents
    cents = dollars * 100

    # calculating how many quarters is needed
    quarters = calculate_quarters(cents)
    cents = cents - quarters * 25

    # calculating how many dimes is needed
    dimes = calculate_dimes(cents)
    cents = cents - dimes * 10

    # calculating how many nickels is needed
    nickels = calculate_nickels(cents)
    cents = cents - nickels * 5

    # calculating how many pennies is needed
    pennies = calculate_pennies(cents)
    cents = cents = pennies * 1

    # adding all coins needed to be given to customer
    coins = quarters + dimes + nickels + pennies

    print(coins)


def get_dollars():
    while True:
        try:
            dollars = float(input("Cents owed to customer: "))
            if dollars > 0:
                break
        except ValueError:
            print("Enter valid amount")
    return dollars


def calculate_quarters(cents):
    quarters = ((cents - (cents % 25)) / 25)
    return quarters


def calculate_dimes(cents):
    dimes = ((cents - (cents % 10)) / 10)
    return dimes


def calculate_nickels(cents):
    nickels = ((cents - (cents % 5)) / 5)
    return nickels


def calculate_pennies(cents):
    pennies = ((cents - (cents % 1)) / 1)
    return pennies


main()

