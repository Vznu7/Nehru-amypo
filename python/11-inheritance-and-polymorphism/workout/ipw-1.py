# Read the input (assuming it's provided as a single string)
signal = input().strip()

if signal == "Red":
    print("Stop")
elif signal == "Yellow":
    print("Ready")
elif signal == "Green":
    print("Go")
else:
    print("Invalid input")