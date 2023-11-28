"""
Зад. 5 Принтирайте арка с големина N
Пример:
N: 3
  *
 * *
*   *    
"""
N = int(input("N da e: "))
for i in range(1, N + 1):
    if i == 1:
        print(" " * (N - i) + "*")
    elif i == N:
        print("*" + " " * (2 * (i - 1) - 1) + "*")
    else:
        print(" " * (N - i) + "*" + " " * (2 * (i - 1) - 1) + "*")