try:
    num1 = float(input())
    num2 = float(input())
    num3 = float(input())

    if num1 < 0 or num2 < 0 or num3 < 0:
        print("Invalid input")
    else:
        if num1 >= num2 and num1 >= num3:
            print(num1)
        elif num2 >= num1 and num2 >= num3:
            print(num2)
        else:
            print(num3)

except ValueError:
    print("Invalid input")