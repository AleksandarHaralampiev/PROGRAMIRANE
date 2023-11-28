#Зад. 9 Добавате Type, който се приема от стандартния вход, към Зад. 8. Опциите на Type са "int" и "float"

a = input("Enter a: ")
b = input("Enter b: ")
operation = input("Enter operation(add,subtract,multiply,divide,power): ")
type = input("Enter type(int,float): ")

if type.lower() == "int":
    a = int(a)
    b = int(b)
elif type.lower() == "float":
    a = float(a)
    b = float(b)
else:
    print("Invalid type")
    exit()

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
    
print(type)