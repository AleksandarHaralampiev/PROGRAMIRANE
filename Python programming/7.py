#Зад. 7 Принтирайте дали едно число N е просто или не
import math
N=int(input("What should N be: "))

if N > 1:
    for i in range(2, N):
        if N % i == 0:
            print(f"{N} не е просто число.")
            break
    else:
        print(f"{N} е просто число.")
else:
    print(f"{N} не е просто число.")
