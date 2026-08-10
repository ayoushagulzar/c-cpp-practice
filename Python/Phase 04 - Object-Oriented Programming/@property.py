# @property is decorator used to access a method like an attribute
# Benefits: Add additional logic when read, write or delete attributes
# gives getter , setter , deleter method
# It is often used to implement encapsulation in Python by controlling how attributes are read and modified.

class Rectangle:
    def __init__(self , width , height):
        self._width = width
        self._height = height

    # ====================== GETTER METHODS =============================
    @property
    def width(self):
        return f"{self._width:.1f}cm"

    @property
    def height(self):
        return f"{self._height:.1f}cm" 
   # ====================== SETTER METHODS =============================
    @width.setter
    def width(self , new_width):  
        if new_width > 0:
            self._width = new_width
        else: 
            print("Width must be greater than zero.") 

    @height.setter
    def height(self , new_height):  
        if new_height > 0:
            self._width = new_height
        else: 
            print("Height must be greater than zero.") 
              


rectangle = Rectangle(3.45 , 4.67)

rectangle.width = 5
rectangle.height = -6 

print(f"Width: {rectangle.width}") #new width = 5
print(f"Height: {rectangle.height}") #height remain same since -6 < 0
        
