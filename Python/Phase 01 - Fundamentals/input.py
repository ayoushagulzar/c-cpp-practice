#input() --- Return the entered data as string

item = input("What item would you like to buy?")
price = float(input("what is the price?")) #typecasting ..since input returns string
quantity = input("How many would you like to buy?") #typecasting --> later in code

total = int(quantity) * price

print(f"You have bought {quantity} {item}/s")
print(f"Your total bill is: ${round(total , 2)}")