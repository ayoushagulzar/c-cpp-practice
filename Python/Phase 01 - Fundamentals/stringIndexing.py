# ============================================
#       Python String Indexing & Slicing
# ============================================

s = "Hello, World!"

print("=" * 50)
print("Original String:")
print(s)
print("=" * 50) #will print "=" 50 times


print("\n========== String Indexing ==========")

# Access the first character
print("\nFirst Character (Index 0):")
print(s[0])

# Access the last character using a positive index
print("\nLast Character (Index 12):")
print(s[12])

# Access the last character using a negative index
print("\nLast Character (Index -1):")
print(s[-1])

# Access the second last character
print("\nSecond Last Character (Index -2):")
print(s[-2])

# Length of the string
print("\nLength of the String:")
print(len(s))


print("\n========== Basic Slicing ==========")

# Copy the entire string
print("\nCopy the Entire String:")
print(s[:])

# Extract the first five characters
print("\nFirst Five Characters:")
print(s[:5])

# Extract characters from index 7 to the end
print("\nCharacters from Index 7 to the End:")
print(s[7:])

# Extract characters from index 2 to 7
print("\nCharacters from Index 2 to 7:")
print(s[2:8])


print("\n========== Negative Slicing ==========")

# Last five characters
print("\nLast Five Characters:")
print(s[-5:])

# Remove the last character
print("\nRemove the Last Character:")
print(s[:-1])

# Remove the last five characters
print("\nRemove the Last Five Characters:")
print(s[:-5])

# Extract characters using negative indexes
print("\nCharacters from Index -8 to -2:")
print(s[-8:-2])



print("\n========== Step in Slicing ==========")

# Take every second character
print("\nEvery Second Character:")
print(s[::2])

# Start from index 1 and take every second character
print("\nStart at Index 1 and Take Every Second Character:")
print(s[1::2])


print("\n========== Reverse String ==========")

# Reverse the entire string
print("\nReverse the Entire String:")
print(s[::-1])

# Reverse a part of the string
print("\nReverse Characters from Index 10 to 6:")
print(s[10:5:-1])

print("\n========== Start : End : Step ==========")

# Start at index 1, stop before index 10, move by 2
print("\nStart = 1, End = 10, Step = 2")
print(s[1:10:2])