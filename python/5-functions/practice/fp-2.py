n=list(map(int,input().split()))
size=len(n)
if(size<0 or size >20   ):
    print("Invalid input")

else:
    product =1
    for i in n:
        if i>20:
            print("Invalid input")
            exit()
        else:
            product*=i
    print(product)

