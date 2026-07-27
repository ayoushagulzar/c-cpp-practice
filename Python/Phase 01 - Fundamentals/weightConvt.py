#weight converter using if-else ladder

weight = float(input("Enter you weight: "))
unit = input("Kilograms or pounds? (K or L): ")

if unit == "L" :
    weight = weight * 2.205
    unit = "llbs."
elif unit=="K":
    weight = weight / 2.205
    unit = "kgs" 
else:
    print("Invalid unit!")

print(f"Your weight is {round(weight,2)} {unit}")
