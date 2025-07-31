year = int(input())

if year < 0:
    print("Invalid input")
elif (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
    print("leap year")
else:
    print("Not a leap year")