# Read space-separated input
input_str = input().strip()
try:
    hours_str, wage_str = input_str.split()
    hours = int(hours_str)
    wage = int(wage_str)

    # If either input is negative, print Invalid input
    if hours < 0 or wage < 0:
        print("Invalid input")
    else:
        print(hours * wage)
except:
    print("Invalid input")
