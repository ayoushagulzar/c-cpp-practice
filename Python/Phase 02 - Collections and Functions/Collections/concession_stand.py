menu = {
    "burger": 8.99,
    "pizza": 14.99,
    "fries": 4.50,
    "sandwich": 6.75,
    "pasta": 11.99,
    "biryani": 9.99,
    "coffee": 8.50,
    "shawarma": 5.99,
    "soft Drink": 2.50,
    "ice Cream": 3.99
}

cart = []
total = 0

print("\n------- MENU  -------") 
for key , value in menu.items():
     print(f"{key:10} : ${value:.2f}")
print("----------------------")       

while True:
    food = input("Select an item (q to quit): ").lower()
    if food == "q":
        break
    elif food in menu:
        cart.append(food)

print("\n------- YOUR ORDER -------")
for food in cart:
    total += menu.get(food)  
    print(food, end="  ")      

print()
print(f"Total: {total:.2f}")    