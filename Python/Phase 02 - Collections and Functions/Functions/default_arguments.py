# Default arguments: Automatically used if no value is given during the call.
# Note: # Default values are used only if the argument is omitted; 
#       positional order still matters.


# def net_price(list_price , discount = 0 , tax = 0.25 ):
#     return list_price * (1 - discount) * (1 + tax)

# print(f" Net price = ${net_price(500 , 0.5 , 0.7)}")
# print(f" Net price = ${net_price(750 )}")

import time

def count(end , start = 1):
    for x in range(start , end+1):
        print(x)
        time.sleep(0.5 )
    print("Done!")

count (10)