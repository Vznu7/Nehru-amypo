a = int(input())
if a<0:
    print("Invalid input")
else:
    for i in range(1,11):
        print(f"{a} x {i} = {a*i}")