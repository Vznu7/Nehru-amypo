try:
    a =int(input())
    if a<0:
        print("Invalid input")
    else:
        answer =0
        for i in range(1,a+1):
            answer+=i
        print(answer)
except Exception:
    print("Invalid input")