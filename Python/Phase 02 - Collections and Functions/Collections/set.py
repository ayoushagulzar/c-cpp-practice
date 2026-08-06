# Set = {}  Unordered, mutable collection of unique,
#       hashable elements. Duplicate elements are automatically removed.

fruits = {"apple" , "orange" , "mango" , "kiwi"}

print(fruits) #prints all fruits 
# print(fruits[::-1]) #sets are not supscriptable (reason: sets are unordered)


# print("\n=============== dir function output ===============\n")
# print(dir(fruits))   #Lists all attributes and methods of the sets

# print("\n=============== help function output ===============\n")
# print(help(fruits))  #Displays documentation about the sets type

print("\n=============== len function output ===============")
print("There are " , len(fruits) , " items in list.\n") #returns no: of items in a set

#this function checks whether the mentioned item is in set of not ("gives ans in boolean")
print("Is apple in list of fruits?" , "apple" in fruits)

fruits.add("pineapple")
print("\nList after add method:")
print(fruits)

print("\nList after remove method:")
fruits.remove("apple")  #gives error if missing
print(fruits)

print("\nList after discard method:")
fruits.discard("grapes")  #no error if missing
print(fruits)

print("\npop method output:") 
fruits.pop() #removes and returns an arbitrary element from the set
print(fruits)

print("\nclear method output:")
fruits.clear() 
print(fruits)

# ================= Methods NOT available for Sets =================
# append()  -> Sets use add() instead because they are unordered.
# insert()  -> Sets have no indexes, so insertion at a specific location is impossible.
# sort()    -> Sets are unordered, so they cannot be sorted in place.
#              (Use sorted(set_name) to get a sorted list.)
# reverse() -> Sets have no order, so they cannot be reversed.
# index()   -> Sets have no indexes because they are not sequences.
# count()   -> Sets store only unique elements, so counting duplicates is unnecessary.
