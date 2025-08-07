a= int(input())
if a<0:
    print("Invalid input")
else:
    first =0
    second =1
    for i in range(a):
        print(first ,end=" ")
        next =first +second
        first =second
        second =next