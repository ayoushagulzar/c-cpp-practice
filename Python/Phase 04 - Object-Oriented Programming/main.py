from _class import Car

car1 = Car("Fortuner" , 2026 , "Black" , False)   
car2 = Car("BMW" , 2025 , "White" , True) 
print("CAR 1: ")
print(f"Model = {car1.model}")
print(f"Year = {car1.year}")
print(f"Color = {car1.color}")
print(f"Is for sale? {car1.for_sale}")
car1.drive()

print()

print("CAR 2: ")
print(f"Model = {car2.model}")
print(f"Year = {car2.year}")
print(f"Color = {car2.color}")
print(f"Is for sale? {car2.for_sale}")
car2.stop()


