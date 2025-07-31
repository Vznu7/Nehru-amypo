angle1 = int(input())
angle2 = int(input())
angle3 = int(input())


if angle1 + angle2 + angle3 != 180 or angle1 <= 0 or angle2 <= 0 or angle3 <= 0:
    print("Invalid triangle")
elif angle1 == angle2 == angle3:
    print("equilateral")
elif angle1 == angle2 or angle2 == angle3 or angle1 == angle3:
    print("isosceles")
else:
    print("scalene")