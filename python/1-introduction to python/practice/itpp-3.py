a=input()
if a.lstrip('-').isdigit():
    num =int(a)
    hexa = hex(num)
    octa =oct(num)
    print(hexa[2:])
    print(octa[2:])
else:
    print("Invalid input")