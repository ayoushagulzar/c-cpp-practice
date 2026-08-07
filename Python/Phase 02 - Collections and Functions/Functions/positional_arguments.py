# Positional arguments: Passed in the exact order matching the function definition.

# FUNCTION WITHOUT RETURN STATEMENT
def display_invoice(name , amount , due_date):
    print(f"Hello {name}")
    print(f"Your bill of ${amount:.2f} is due: {due_date}")

display_invoice("Ahmed" , 100.346 , "02-08-2026" )
print()

# FUNCTION WITH RETURN STATEMENT

def add (x , y):
    z = x + y
    return z

def subtract (x , y):
    z = x - y
    return z

def multiply (x , y):
    z = x * y
    return z

def divide (x , y):
    z = x / y
    return z

print(f"Sum = {add(10 , 20)}")
print(f"Difference = {subtract(10 , 20)}")
print(f"Product = {multiply(10 , 20)}")
print(f"Quotient = {divide(10 , 2)}")
print()

def create_name(first_name , last_name):
    first = first_name.capitalize()
    last = last_name.capitalize()
    return first + " " + last

full_name = create_name("ayousha" , "gulzar")
print(f"Full name = {full_name}")
print()

