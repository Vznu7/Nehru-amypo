nums = list(map(int, input().split()))

if any(n < 0 for n in nums):
    print("Invalid input")
else:
    total = sum(n ** 2 for n in nums)
    print(total)