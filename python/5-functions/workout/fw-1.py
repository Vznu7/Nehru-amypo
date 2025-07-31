a = int(input())
if a<0:
    print("Invalid Input")
else:
    sum =0
    while(a>0):
        last = a%10
        sum+=last
        a//=10
    print(sum)