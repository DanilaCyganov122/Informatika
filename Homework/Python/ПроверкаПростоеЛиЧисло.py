import math
number = input()
number = float(number)
for i in range(2, int(math.sqrt(number))+1):
    if int(number)%i == 0:
        print("число составное")
        break
if int(number)%i> 0:
    print("число простое")
