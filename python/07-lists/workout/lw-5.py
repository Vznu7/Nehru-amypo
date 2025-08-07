try:
    a = list(map(int, input().split()))
    i1 = int(input())
    i2 = int(input())

    size = len(a)
    if  (i1 > size and i2 > size):
        print("Invalid input")
    else:
        a[i1], a[i2] = a[i2], a[i1]
        print(*a)
except:
    print("Invalid input")