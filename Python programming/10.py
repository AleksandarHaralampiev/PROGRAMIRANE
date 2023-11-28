"""
Зад. 10 Статистика. 
Намерете min, max, average, мода и медиана на списък с елементи от тип int с големина N. 
Елементите на списъка се въвеждат от стандартния вход. Модата е най-повтаряното число в списъка. 
Медианата е числото в средата (или средно аритметичното на двете числа в средата при списъци с четна големина) когато списъкът е подреден по големина.
"""

n = int(input("What do you want the array size to be: "))

array = [0] * n

for i in range(n):
    array[i] = int(input("Enter a number: "))

max = array[0]
for i in range(n):
    if array[i] > max:
        max = array[i]
print("Max: ", max)
min = array[0]
for i in range(n):
    if array[i] < min:
        min = array[i]
print("Min: ", min)
array.sort()
print("Sorted array: ", array)
average = sum(array) / n
print("Average: ", average)
# mode
mode = array[0]
max_count = 0
for i in range(n):
    count = 0
    for j in range(n):
        if array[i] == array[j]:
            count += 1
    if count > max_count:
        max_count = count
        mode = array[i]
if max_count > 1:
    print("Mode: ", mode)
else:
    print("Mode: No mode")
median = 0
if n % 2 == 0:
    median = (array[n // 2] + array[n // 2 - 1]) / 2
else:
    median = array[n // 2]
print("Median: ", median)