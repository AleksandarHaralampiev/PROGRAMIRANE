import tkinter as tk
import math

def solve_quadratic():
    a = float(entry_a.get())
    b = float(entry_b.get())
    c = float(entry_c.get())


    if a == 0:
        label_sol.config(text = "a cannot be 0")
        return
    elif b == 0 and c == 0:
        label_sol.config(text = "x = 0")
        return
    elif b == 0:
        label_sol.config(text = "x = {0}".format(-c/a))
        return
    elif c == 0:
        label_sol.config(text = "x = 0, x = {0}".format(-b/a))
        return
    d = b**2 - 4*a*c
    if d < 0:
        label_sol.config(text = "No real solutions")
        return

    sol1 = (-b-math.sqrt(d))/(2*a)
    sol2 = (-b+math.sqrt(d))/(2*a)


    label_sol.config(text = "x = {0}, x = {1}".format(sol1, sol2))

root = tk.Tk()
root.title("Quadratic Equation Solver")

label_a = tk.Label(root, text="Enter a:")
label_a.pack()
entry_a = tk.Entry(root)
entry_a.pack()

label_b = tk.Label(root, text="Enter b:")
label_b.pack()
entry_b = tk.Entry(root)
entry_b.pack()

label_c = tk.Label(root, text="Enter c:")
label_c.pack()
entry_c = tk.Entry(root)
entry_c.pack()

button_solve = tk.Button(root, text="Solve", command=solve_quadratic)
button_solve.pack()

label_sol = tk.Label(root, text="")
label_sol.pack()

root.mainloop()