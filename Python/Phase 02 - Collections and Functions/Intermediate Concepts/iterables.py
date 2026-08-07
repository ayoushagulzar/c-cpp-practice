# An iterable is an object that can be iterated over one element at a time.
# Used with: for loops, list(), tuple(), set(), sum(), max(), min(), etc.
# Examples: list, tuple, string, set, dictionary, range.

print("\nTuple:")
numbers = (1 ,2 ,3 ,4, 5)
for num in reversed(numbers):
    print(num , end = " ")
print()

print("\nSet:")
fruits = {"apple" , "orange" , "mango"}     
for fruit in fruits:
    print(fruit , end = ", ")
print()    

print("\nString:")
name = "Ayousha Gulzar"
for character in name:
    print(character , end = " ")
print()    

print("\nDictionary:")
dictionary = {"A" : 1 , "B" : 2 , "C" : 3}
for key , value in dictionary.items():
    print(f"{key} : {value}")
print()    
