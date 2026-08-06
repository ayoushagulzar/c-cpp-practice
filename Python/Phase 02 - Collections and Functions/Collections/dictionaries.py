# Dictionary = {} Ordered, mutable collection of key-value pairs.
#             Keys are unique and hashable, while values can be of any data type.

capitals = {
          "Pakistan" : "Islamabad",
          "China"    : "Beijing",
          "Japan"    : "Tokyo",
          "France"   : "Paris",
          "Germany"  : "Berlin",
}

# print("\n=============== dir function output ===============\n")
# print(dir(capitals))   #Lists all attributes and methods of the sets

# print("\n=============== help function output ===============\n")
# print(help(capitals))  #Displays documentation about the sets type


if capitals.get("USA"):
    print("Capital exists.")
else:
    print("Capital does not exist.")  

# capitals.update({"France" : "Tokyo"}) 
# print(capitals)    

capitals.pop("China") #removes a specified key-value pair
print(capitals)

capitals.popitem() #removes the last inserted key-value pair.
print(capitals)

keys = capitals.keys() #returns all keys
print("\n-------------- All Keys --------------")
for key in keys:
    print(key)

print("\n-------------- All Values --------------")
for value in capitals.values(): #returns all values
    print(value)

print()

# items = capitals.items() #returns all key-value pairs.
# print(items)

# more effective is:
for key , value in capitals.items():
    print(f"{key} : {value}")

capitals_copy = capitals.copy() #Returns a shallow copy of the dictionary.
capitals_copy["Pakistan"] = "Karachi"
print("Original:" , capitals)
print("Copy:" , capitals_copy)

print("After clear method....")
capitals.clear()
print(capitals)