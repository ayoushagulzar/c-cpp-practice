# Scope resolution is the process of finding a variable using the LEGB rule:
# 01. L – Local: Variables inside the current function.
# 02. E – Enclosing: Variables in the enclosing (nested) function.
# 03. G – Global: Variables defined outside all functions.
# 04. B – Built-in: Python's built-in names (e.g., len, print).

# The first matching variable found is used.

from math import e

x = "Global"

def outer():
    x = "Enclosing"

    def inner():
        x = "Local"
        print(x)

    inner()

outer()

# Global > built-in .. in this example
def func():
    print(e)

e = 3
print(e)    