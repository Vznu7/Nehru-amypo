num1=int(input())
num2=int(input())
if num1<0 or num2<0:
    print("Invalid input")
elif(num2==0):
    print("Cannot divide by zero")
else:
    result =num1//num2
    print(result)