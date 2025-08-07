try:
    a =list(map(int,input().split()))
    if any(n<0 for n in a ):
        print("Invalid input")
    else:
        even =[n for n in a if n%2==0]
        odd =[n for n in a if n%2!=0]
        print(*even)
        print(*odd)
except Exception:
    print("Invalid input")
    