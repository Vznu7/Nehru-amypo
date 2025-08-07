try:
    a=int(input())
    b=int(input())
    if(a<0 or b<0):
        print("Invalid input")
    else:
        speed_in_km =(a*1000)/3600
        distance =int(speed_in_km*b)
        print(distance)
except Exception:
    print("Invalid input")