# List comprehension is a concise way to create a new list using a single line of code.
# Syntax (w/o cond:)-> new_list = [expression for item in iterable]
# with condition -> new_list = [expression for item in iterable if condition]

# List comprehensions can iterate over any iterable
# (e.g., list, tuple, set, string, dictionary, range)

print("\n------------------ Without Condition Examples ------------------\n")
doubles = [x * 2 for x in range(1, 11)]
triples = [y * 3 for y in range(1, 11)]
squares = [z * z for z in range(1, 11)]

print(f"Doubles = {doubles}")
print(f"Triples = {triples}")
print(f"Sqaures = {squares}")

courses = ("oop" , "pf" , "dld" , "dsa" , "mvc")
courses = [course.upper() for course in courses]
print(f"Courses in uppercase: {courses}")

fruits = {"apple" , "orange" , "mango" , "kiwi"}
fruit_chars = [fruit[0] for fruit in fruits]
print(f"Fruits characters: {fruit_chars}")

print("\n------------------- With Condition Examples --------------------\n")
numbers = [1 , -2 , 3 , -4 , 5 , 6 , -7 , 8]

positive_nums = [num for num in numbers if num >= 0]
negative_nums = [num for num in numbers if num <= 0]
even_nums = [num for num in numbers if num %2 == 0]
odd_nums = [num for num in numbers if num %2 != 0]

print(f"Positive numbers: {positive_nums}")
print(f"Negative numbers: {negative_nums}")
print(f"Even numbers: {even_nums}")
print(f"Odd numbers: {odd_nums}")

