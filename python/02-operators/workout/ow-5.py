try:
    a=int(input())
    b=int(input())
    if not (-10**6 < a < 10**6) or not (-10**6 < b < 10**6)or a>9998 :
        print("Invalid input")
    else:   
        print(a & b)
except:
        print("Invalid input")