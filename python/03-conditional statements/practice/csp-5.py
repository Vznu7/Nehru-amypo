num1 = int(input())
num2 = int(input())

if num1 < 0 or num2 < 0:
    print("Invalid input")
else:
    print(max(num1, num2))