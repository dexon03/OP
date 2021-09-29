import math


x1 = float(input())
y1 = float(input())
x2 = float(input())
y2 = float(input())
x3 = float(input())
y3 = float(input())

vidst1 = math.sqrt(math.pow(x1,2)+math.pow(y1,2))
vidst2 = math.sqrt(math.pow(x2,2)+math.pow(y2,2))
vidst3 = math.sqrt(math.pow(x3,2)+math.pow(y3,2))

if vidst1<vidst2 and vidst1<vidst2:
    print("first point nearly")
elif vidst2<vidst3:
    print("second point nearly")
else: print("third point nearly")