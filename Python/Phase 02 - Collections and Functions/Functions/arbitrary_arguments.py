# Arbitrary arguments: Accepts a variable number of inputs using *args or **kwargs
# *args: Accepts multiple positional arguments. (use asterisk with arg_name) 
# **kwargs: Accepts multiple keyword arguments. (use double asterisk with arg_name)

# print("----------- Variable-length arguments Example -----------")
# def add(*nums):
#     total = 0
#     for num  in nums:
#         total+=num
#     return total

# print(f"sum = {add(1,2,3,4 )}")    

# def display_name(*names):
#     for name in names:
#         print(name , end = " ")

# display_name("Aini" , "Laghari")  


# print("------- Variable-length keyword arguments Example -------")
# def print_address(**address):
#     for key , value in address.items():
#         print(f"{key} : {value}")

# print_address(street = "123 fake street",
#               city = "Hyderabad",
#               state = "ABC",
#               zip = "54321") 


#REMEMBER: When used together, *args must come before **kwargs.
def shiping_label(*args , **kwargs):
    for arg in args:
        print(arg , end = " ")
    print()
    print(f"{kwargs.get('street')}")
    print(f"{kwargs.get('city')} , {kwargs.get('state')} , {kwargs.get('zip  ')} ")

shiping_label("Dr." , "Alicia" , "Jackson",
              street = "123 fake street",
              city = "Hyderabad",
              state = "ABC",
               zip = "54321")         