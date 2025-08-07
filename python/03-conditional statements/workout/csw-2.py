def determine_water_state(temp):
    if temp < -273 or temp > 5000:
        return "Invalid input"
    elif temp <= 0:
        return "Solid"
    elif temp < 100:
        return "Liquid"
    else:
        return "Gas"


try:
    temperature = int(input())
    print(determine_water_state(temperature))
except ValueError:
    print("Invalid input")