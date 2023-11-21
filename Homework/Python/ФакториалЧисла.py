number = input()
factorial: int
factorial = 1
for i in range(1, int(number)+1):
    factorial = factorial * i
print(factorial)