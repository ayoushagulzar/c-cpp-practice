s = "  Hello, World! Python is Awesome  "

print("=" * 50)
print("Original String:")
print(f"'{s}'")
print("=" * 50)

print("\n========== Case Conversion ==========")

print("\nConvert to Uppercase:")
print(s.upper())

print("\nConvert to Lowercase:")
print(s.lower())

# Capitalize the first letter of every word
print("\nConvert to Title Case:")
print(s.title())

# Capitalize only the first character of the string
print("\nCapitalize the First Character:")
print(s.capitalize())

# Swap uppercase letters to lowercase and vice versa
print("\nSwap Uppercase and Lowercase Letters:")
print(s.swapcase())


print("\n========== Whitespace Handling ==========")

# Remove leading and trailing spaces
print("\nRemove Spaces from Both Ends:")
print(f"Before: '{s}'")
print(f"After : '{s.strip()}'")

print("\nRemove Leading Spaces:")
print(f"Before: '{s}'")
print(f"After : '{s.lstrip()}'")

print("\nRemove Trailing Spaces:")
print(f"Before: '{s}'")
print(f"After : '{s.rstrip()}'")


print("\n========== Searching ==========")

# Find the first occurrence of a substring
print("\nFind the Index of 'World':")
print(s.find("World"))

# Find the index of a substring (raises an error if not found)
print("\nFind the Index of 'Python':")
print(s.index("Python"))

# Count occurrences of a character
print("\nCount the Number of 'o' Characters:")
print(s.count("o"))

# Check whether a substring exists
print("\nCheck if 'Python' Exists in the String:")
print("Python" in s)


print("\n========== Checking String Content ==========")

# Check if the string contains only digits
print("\nIs '12345' Made of Digits?")
print("12345".isdigit())

# Check if the string contains only letters
print("\nIs 'Hello' Made of Letters?")
print("Hello".isalpha())

# Check if the string contains only letters and numbers
print("\nIs 'Hello123' Alphanumeric?")
print("Hello123".isalnum())

# Check if the string contains only whitespace
print("\nDoes the String Contain Only Spaces?")
print("   ".isspace())

# Check if all letters are lowercase
print("\nIs 'hello' Completely Lowercase?")
print("hello".islower())

# Check if all letters are uppercase
print("\nIs 'HELLO' Completely Uppercase?")
print("HELLO".isupper())

# Check if every word starts with a capital letter
print("\nIs 'Hello World' in Title Case?")
print("Hello World".istitle())



print("\n========== Splitting and Joining ==========")

# Split the string into words
print("\nSplit the String into Individual Words:")
print(s.strip().split())

# Split a CSV string using commas
csv_line = "name,age,city"
print("\nSplit a CSV String:")
print(csv_line.split(","))

# Join a list into a string
print("\nJoin a List Using '-':")
print("-".join(["a", "b", "c"]))


print("\n========== Replacing ==========")

# Replace one substring with another
print("\nReplace 'Python' with 'Java':")
print(s.replace("Python", "Java"))


print("\n========== String Formatting ==========")

name = "Ali"
age = 20

# Format using f-string
print("\nUsing an f-string:")
print(f"My name is {name} and I am {age} years old.")

# Format using .format()
print("\nUsing the format() Method:")
print("{} is {} years old.".format(name, age))


print("\n========== Prefix and Suffix Checking ==========")

# Check if the string starts with a specific text
print("\nDoes the String Start with 'Hello'?")
print(s.strip().startswith("Hello"))

# Check if the string ends with a specific text
print("\nDoes the String End with 'Awesome'?")
print(s.strip().endswith("Awesome"))


print("\n========== Character and ASCII Conversion ==========")

# Convert a character to its ASCII value
print("\nASCII Value of 'A':")
print(ord('A'))

# Convert an ASCII value to its character
print("\nCharacter Represented by ASCII Value 65:")
print(chr(65))


print("\n========== Text Alignment ==========")

text = "Python"

# Center-align text
print("\nCenter Align Within 20 Characters:")
print(f"'{text.center(20)}'")

# Left-align text
print("\nLeft Align Within 20 Characters:")
print(f"'{text.ljust(20)}'")

# Right-align text
print("\nRight Align Within 20 Characters:")
print(f"'{text.rjust(20)}'")

# Center-align using a custom fill character
print("\nCenter Align Using '-' as Padding:")
print(text.center(20, "-"))
