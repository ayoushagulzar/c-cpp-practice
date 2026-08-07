# Keyword arguments: Passed explicitly using name-value pairs, ignoring order.

# def hello(greeting , title , first , last):
#     print(f"{greeting} {title} {first} {last}")

# hello("Hello" , last="Gulzar" , first="Ayousha" , title="Ms.")     

def get_phone(country , area , first , last):
    return f"{country}-{area}-{first}-{last}"

phone_num = get_phone(country=1 , first=456 , last=7890 , area=123)
print(f"Phone no: {phone_num}")