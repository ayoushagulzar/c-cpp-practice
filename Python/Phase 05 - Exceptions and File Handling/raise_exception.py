# raise is used to manually generate an exception.

try:
    age = int(input("Enter your age: "))

    if age < 0:
        raise ValueError("Age cannot be negative.")

    print(f"Age: {age}")

#"as e" stores the exception object in variable e.
except ValueError as e:
    print(f"Error: {e}")

# Use raise when you want to say: 
# "This condition is an exception; stop normal execution and let the caller handle it."    