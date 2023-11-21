lst = ['a','e','y','u','o','i','ё','у','е','э','о','а','ы','я','и','A','E','Y','U','O','I','Ё','У','Е','Э','О','А','Ы','Я','И','Ю']
str = input('Введите строку: ')
count: int
count = 0
for i in range(0, len(str)):
    if str[i] in lst:
        count += 1
print("Количество гласных: ", count )