try:
    a = int(input())
    b = int(input())
    add = a + b
    sub = a - b
    mul = a * b
    if b == 0:
        div = "Invalid input"
        print(add)
        print(sub)
        print(mul)
        print(div)
    else:
        div = a / b
        print(add)
        print(sub)
        print(mul)
        print(div)
except Exception:
    print("Invalid input")