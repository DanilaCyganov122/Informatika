import math

a = float(input())
b = float(input())
c = float(input())

p = (a + b + c) / 2
k = p * (p - a) * (p - b) * (p - c)
s = math.sqrt(p * (p - a) * (p - b) * (p - c))

if k < 0:
    print("Треугольника с такими сторонами не существует")
else:
    print(s)
