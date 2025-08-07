def perimeter(n):
    square = 4*n
    return square
    
a =int(input())
if a<0:
    print("Invalid input")
else:
    answer =perimeter(a)
    print(answer)