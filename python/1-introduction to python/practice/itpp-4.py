# Input: 8 space-separated integers
numbers = list(map(int, input().split()))
swapped = [numbers[-1]] + numbers[:-1]
print(*swapped)