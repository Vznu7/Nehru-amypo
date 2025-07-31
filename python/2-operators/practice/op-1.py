try:
    a =int(input())
    b=int(input())
    if not(-100<=a<=100) or not(0<=b<=100):
        print("Invalid input")
    else:
        c =a**b
        print(c*a)
except ValueError:
    print("Invalid input")