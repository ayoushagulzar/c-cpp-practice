foods = []
prices = []
total = 0

while True:
    food = input("Enter the food to buy (q for quit): ")
    if food.lower() == "q":
        break
    else:
        price = float(input(f"Enter the price of {food}: $"))
        foods.append(food)
        prices.append(price)


print("\n-------------- Your Cart --------------")
# zip() -> Iterates over multiple iterables simultaneously.
for food,price in zip(foods,prices):
   print(f"{food:<10} : ${price:.2f}")

print("---------------------------------------") 
for price in prices:
    total+=price
print(f"Total{"":<5} : ${total:.2f}")       