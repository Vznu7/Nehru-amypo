a = list(map(int, input().split()))
if any(i < 0 for i in a):
    print("Invalid input")
else:
    total = sum(i for i in a if i % 2 != 0)
    print(total)