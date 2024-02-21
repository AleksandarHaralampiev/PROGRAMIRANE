import tkinter as tk
import math

def calculate_sqrt_sum():
    try:
        num1 = float(entry1.get())
        num2 = float(entry2.get())
        num3 = float(entry3.get())
        result = math.sqrt(num1 + num2 + num3)
        result_label1.config(text=str(result))
    except ValueError:
        result_label1.config(text="Invalid input")

def calculate_average():
    try:
        num1 = float(entry1.get())
        num2 = float(entry2.get())
        num3 = float(entry3.get())
        result = (num1 + num2 + num3) / 3
        result_label2.config(text=str(result))
    except ValueError:
        result_label2.config(text="Invalid input")

root = tk.Tk()

entry1 = tk.Entry(root)
entry1.pack()

entry2 = tk.Entry(root)
entry2.pack()

entry3 = tk.Entry(root)
entry3.pack()

button1 = tk.Button(root, text="Presmqtane na sqrt sumata", command=calculate_sqrt_sum)
button1.pack()

result_label1 = tk.Label(root, text="")
result_label1.pack()

button2 = tk.Button(root, text="Presmqtane na average", command=calculate_average)
button2.pack()

result_label2 = tk.Label(root, text="")
result_label2.pack()

root.mainloop()