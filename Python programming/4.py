"""
Зад. 4 Принтирайте равнобедрен триъгълник с големина N
Пример:
N: 3
  *
 ***
 ****  
"""
N = int(input("Kolko da e N: "))
for i in range(1, N + 1):
    print(" " * (N - i), end="")
    print("*" * (2 * i - 1))