#     A decorator in Python is a function that adds or changes
#     the behavior of another function without modifying its code.
# Pass the base function as an argument to the base function. 

# ================ BASIC SYNTAX ================
# def decorator(func):
#     def wrapper():
#         print("Before function call")
#         func()
#         print("After function call")
#     return wrapper

# ============== EXAMPLE PROGRAM ===============

def add_sprinkles(func):
    def wrapper(*arg , **kwargs):
        print("You add sprinkles.")
        func(*arg , **kwargs)
    return wrapper  
 
def add_fudge(func):
    def wrapper(*arg , **kwargs):
        print("You add fudge.")
        func(*arg , **kwargs)
    return wrapper

@add_fudge
@add_sprinkles
def get_ice_cream(flavor):
    print(f"Here is your {flavor} ice cream🍨")

# This is equivalent to get_ice_cream = add_sprinkles(get_ice_cream )
get_ice_cream("Chocolate") 