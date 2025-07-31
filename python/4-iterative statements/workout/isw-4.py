n = int(input())

if n < 1 or n > 15 or n % 2 == 0:
    print("Invalid input")
else:
    for i in range(1, n + 1, 2):
        print(" " * ((n - i) // 2) + "*" * i)
    for i in range(n - 2, 0, -2):
        print(" " * ((n - i) // 2) + "*" * i)