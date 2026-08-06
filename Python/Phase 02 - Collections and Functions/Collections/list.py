# Collection = single "variable" used to store multiple values.
# List = [] Ordered, mutable sequence that allows duplicate elements.


fruits = ["apple" , "orange" , "mango" , "mango" , "kiwi"]

print(fruits) #prints all fruits 
print(fruits[::-1]) #prints in reverse order
print(fruits[:2]) #prints just two values

# print("\n=============== dir function output ===============\n")
# print(dir(fruits))   #Lists all attributes and methods of the list

# print("\n=============== help function output ===============\n")
# print(help(fruits))  #Displays documentation about the list type

print("\n=============== len function output ===============")
print("There are " , len(fruits) , " items in list.\n") #returns no: of items in a list

#this function checks whether the mentioned item is in list of not ("gives ans in boolean")
print("Is apple in list of fruits?" , "apple" in fruits)

fruits.append("pineapple")
print("\nList after append method:")
print(fruits)

print("\nList after remove method:")
fruits.remove("apple")
print(fruits)

print("\nList after insert method:")
fruits.insert(1,"strawberry")
print(fruits)

print("\nList after sort method:")
fruits.sort() 
print(fruits)

print("\nList after reverse method:")
fruits.reverse() 
print(fruits)

print("\nindex method output:")
print("Index of mango is: " , fruits.index("mango"))


print("\ncount method output:")
print("How many mangos are in list?" , fruits.count("mango"))

print("\nclear method output:")
fruits.clear() 
print(fruits)


