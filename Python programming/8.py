#Зад. 8 Направете калкулатор. Той приема A, B и Operation от стандартния вход и принтира резултат. Operation-ите може да са add, subtract, multiply, divide, power. Числата A и B се считат за такива с тип int.

a = int(input("Enter a: "))
b = int(input("Enter b: "))
operation = input("Enter operation(add,subtract,multiply,divide,power): ")

if operation.lower() == "add":
    print(a + b)
elif operation.lower() == "subtract":
    print(a - b)
elif operation.lower() == "multiply":
    print(a * b)
elif operation.lower() == "divide":
    print(a / b)
elif operation.lower() == "power":
    print(a ** b)
else:
    print("Invalid operation")
