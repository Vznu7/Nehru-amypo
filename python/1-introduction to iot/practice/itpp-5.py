try:
    balance, withdraw = map(int, input().split())

    if balance <= 0 or withdraw <= 0:
        print("Invalid input")
    elif withdraw > balance:
        print("Insufficient Balance")
    else:
        print(balance - withdraw)

except ValueError:
    print("Invalid input")