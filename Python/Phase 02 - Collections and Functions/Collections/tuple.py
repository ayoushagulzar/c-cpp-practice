# Tuple = () Ordered, unchangeable sequence that allows duplicate elements.(FASTER)
#It Can only access and search elements because it cannot be modified.
fruits = ("apple" , "orange" , "mango" , "mango" , "kiwi")

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

print("\nindex method output:")
print("Index of mango is: " , fruits.index("mango"))

print("\ncount method output:")
print("How many mangos are in list?" , fruits.count("mango"))
