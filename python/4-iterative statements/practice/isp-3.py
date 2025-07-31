a = int(input())
if a<0:
    print("Invalid input")
else:
    for i in range(1,a+1):
        spaces =(a -i)
        stars =(2*i)-1
        print(" "*spaces +stars*'*')