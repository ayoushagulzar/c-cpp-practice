# Static methods belong to class rather than any object from that class.
# usually used for general utility functions that do not need access to class data
# Doesn't need "self" or "cls".

class Employee:

    def __init__(self , name , position):
        self.name = name
        self.position = position

    #Instance method
    def get_info(self):
        return f"{self.name} = {self.position}"   

    @staticmethod
    def is_valid_position(position):
        valid_positions = {"Manager" , "Cashier" , "Cook" , "Peon"}
        return position in valid_positions

employee1 = Employee("Ali" , "Manager")
employee2 = Employee("Ahmed" , "Cashier")
employee3 = Employee("Hammad" , "Cook")
print(f"Is valid position? {Employee.is_valid_position("Engineer")}")     

print(employee1.get_info())
print(employee2.get_info())
print(employee3.get_info())