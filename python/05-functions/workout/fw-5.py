def cspeed(speed):
    if speed < 0:
        return "Invalid input"
    elif speed < 60:
        return "Normal"
    elif speed < 80:
        return "Warning"
    else:
        return "Over Speed"


speed = int(input())
result = cspeed(speed)
print(result)