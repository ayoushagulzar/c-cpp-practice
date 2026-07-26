print("My first python program:D")

#Strings
name = "Ayousha"
degree = "BS Software Enigneering"

#Integers
age = 18
course = 5

#Floats
cgpa = 3.5

#Boolean
is_online = True;

# f = formatted string (f-string)
# Use {} to embed variables or expressions directly inside a string.

print(f"I am {name} , {age} years old girl, persuing {degree} at FAST NUCES")
print(f"I got {cgpa} cgpa in my first year of university")
print(f"currently, I am enrolled in {course} courses")
print(f"Am I online? {is_online}")

# ================ without f-string ================
#  print("I am", name, ",", age, "years old girl, pursuing", degree, "at FAST NUCES")
#                  OR
#  print("I am " + name + ", " + str(age) + " years old girl,
#        pursuing " + degree + " at FAST NUCES")  ---> str(age) because When we
#  use the + operator for string concatenation, everything we're adding must be a string.