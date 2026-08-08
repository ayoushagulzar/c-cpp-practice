# A module is a Python file containing reusable code that can be imported into other programs.
# Imported using import or from ... import.
# Can be built-in (e.g., math, random) or user-defined

# print(help("modules"))

# import math as m
# print(m.pi)

from math import e
import custom_module

a , b , c , d = 1 , 2 ,3 ,4

print("--------- Built-in Module Example ---------")
print(f" e^{a} = {e ** a:.2f}")
print(f" e^{b} = {e ** b:.2f}")
print(f" e^{c} = {e ** c:.2f}")
print(f" e^{d} = {e ** d:.2f}")
print()

print("--------- Custom Module Example ---------")
print(f"pi = {custom_module.pi}")
print(f"Sqaure of 3 = {custom_module.square(3)}")
print(f"cube of 5 = {custom_module.cube(5)}")
print(f"circumference = {custom_module.circumference(3.67)}")
print(f"Area of circle = {custom_module.area(3.67)}")
