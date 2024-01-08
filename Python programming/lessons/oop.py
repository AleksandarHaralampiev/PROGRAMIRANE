#Object oriented programming

#classess are blueprints for creating instances
#instances are objects created from a class

class Employee:
    def __init__(self, Name, Surname, Age, Salary):
        self.Name = Name
        self.Surname = Surname
        self.Age = Age
        self.Salary = Salary
        
    def printAll(self):
        print(self.Name, self.Surname, self.Age, self.Salary)
        
        
emp1 = Employee("John", "Smith", 30, 10000)

emp1.printAll()

class Dog:
    def __init__(self, name, age):#constructor method is called when an instance is created from a class and it is used to initialize the attributes of an instance
        self.name = name
        self.age = age
        
    def printAll(self):
        print(self.name, self.age)
        
    def bark(self):
        print("bark")
        
    def setAge(self, age):
        self.age = age

dog1 = Dog("Rex", 2)
dog1.printAll()
