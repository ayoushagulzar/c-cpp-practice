import math

# print("=== Useful math Functions ===")
# print(math.sqrt(25))
# print(math.factorial(6))
# print(math.gcd(48, 18))
# print(math.lcm(12, 18))
# print(math.comb(5, 2)) #combination
# print(math.perm(5, 2)) #permuatation
# print(math.isqrt(20)) #return the integer part of squareroot
# print(math.pi)


#small example 1: Hyp of right angle triangle

Base = float(input("Enter base: "))
Perpendicular = float(input("Enter perpendicular: "))

Hypotenuse = math.sqrt((math.pow(Base,2) + math.pow(Perpendicular,2)))
print(f"Hypotanus of right angle triangle is {round(Hypotenuse,2)} cm")
print()

#small example 2: Circumference of circle
radius = float(input("Enter radius of a circle: "))
circumference = 2 * math.pi * (radius**2) #radius square = radius **2
print(f"Circumference = {round(circumference ,2)}")