a=int(input())
if a<0:
    print("Invalid input")
else:
    for i in range(1,a+1):
        if i%3!=0:
            print(i)