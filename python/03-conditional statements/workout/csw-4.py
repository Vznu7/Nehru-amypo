
a=int(input())
b=int(input())
c=int(input())


if (a < b and b < c) or (c < b and b < a):
    middle = b
elif (b < a and a < c) or (c < a and a < b):
    middle = a
else:
    middle = c


print( middle)