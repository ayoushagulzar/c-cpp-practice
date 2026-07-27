# ========================================================
#         Python Format Specifiers
# In Python, format specifiers control how a value is 
# displayed when using f-strings or the format() method.
# ========================================================

name = "Ali"
age = 20
pi = 3.1415926535
number = 1234567
binary = 30

print("=" * 50)


print("\n========== String Formatting ==========")

# Left align within 10 spaces
print("\nLeft Align:")
print(f"|{name:<10}|")

# Right align within 10 spaces
print("\nRight Align:")
print(f"|{name:>10}|")

# Center align within 10 spaces
print("\nCenter Align:")
print(f"|{name:^10}|")

# Fill empty spaces with '-'
print("\nCenter Align with '-' Padding:")
print(f"|{name:-^10}|")


print("\n========== Integer Formatting ==========")

# Display as an integer
print("\nInteger:")
print(f"{age:d}")

# Display with commas
print("\nComma Separator:")
print(f"{number:,}")

# Display with leading zeros
print("\nLeading Zeros:")
print(f"{age:05}") #specified length < original length ---> no leading zero

# Display with sign
print("\nAlways Show Sign:")
print(f"{age:+}")  # only + or -


print("\n========== Floating Point Formatting ==========")

# Display two decimal places
print("\nTwo Decimal Places:")
print(f"{pi:.2f}")


# Display total width of 10 with two decimal places
print("\nWidth = 10, Precision = 2:")
print(f"|{pi:10.2f}|")


print("\n========== Percentage ==========")

value = 0.85

print("\nDisplay as Percentage:")
print(f"{value:.2%}") #.2 = two digits after decimal


print("\n========== Number Systems ==========")

print("\nBinary:")
print(f"{binary:b}")

print("\nOctal:")
print(f"{binary:o}")

print("\nHexadecimal (Lowercase):")
print(f"{binary:x}")

print("\nHexadecimal (Uppercase):")
print(f"{binary:X}")


print("\n========== Scientific Notation ==========")

print("\nLowercase e:")
print(f"{pi:e}")

print("\nUppercase E:")
print(f"{pi:E}")