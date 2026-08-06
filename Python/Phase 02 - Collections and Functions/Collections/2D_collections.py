# ================= 2D List =================
# A list containing other lists.

fruits_list = [
    ["apple", "orange", "mango"],
    ["banana", "kiwi", "grapes"],
    ["peach", "pear", "melon"]
]

print("2D List:")
for row in fruits_list:
    print(row)

print(f"First fruit: {fruits_list[0][0]}")

# ================= 2D Tuple =================
# A tuple containing other tuples.

fruits_tuple = (
    ("apple", "orange", "mango"),
    ("banana", "kiwi", "grapes"),
    ("peach", "pear", "melon")
)

print("\n2D Tuple:")
for row in fruits_tuple:
    print(row)

print(f"First fruit: {fruits_tuple[0][0]}")

# ================= 2D Set =================
# A set cannot directly contain other sets because sets are unhashable.
# Therefore, a 2D set is typically represented as a set of tuples.

fruits_set = {
    ("apple", "orange", "mango"),
    ("banana", "kiwi", "grapes"),
    ("peach", "pear", "melon")
}

print("\n2D Set:")
for row in fruits_set:
    print(row)

# ================= Mixed Collection =================

mixed = [
    ("apple", "orange"),          # Tuple
    {"mango", "kiwi"},            # Set
    ["banana", "grapes"],         # List
]

print("\nMixed Collection:")
for collection in mixed:
    print(collection)

# ================= Nested Mixed Collection =================

data = [
    ["Ali", (85, 90), {"Python", "C++"}],
    ["Sara", (92, 88), {"Java", "HTML"}],
]

print("\nStudent Data:")
for student in data:
    print("Name:", student[0])
    print("Marks:", student[1])
    print("Skills:", student[2])       

# ================= Keypad Example =================    
print("\n============ Keypad ============\n")
num_pad = [
    [1 , 2 , 3],
    [4 , 5 , 6],
    ["*" , 0 , "#"]
]

for row in num_pad:
    for num in row:
        print(num, end = " ")
    print()    