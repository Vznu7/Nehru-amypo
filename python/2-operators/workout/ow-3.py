try:
    a=int(input())
    inc =a+1
    dec =inc -1
    print(inc)
    print(dec)
except ValueError:
    print("Invalid input")