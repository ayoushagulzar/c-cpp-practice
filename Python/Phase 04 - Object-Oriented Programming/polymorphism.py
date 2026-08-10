# WAYS TO ACHIEVE POLYMORPHISM IN PYTHON:
#   1. Method overriding
#   2. Duck typing 
#   3. Operator overloading 

# Note:Python does NOT support traditional method overloading like C++/Java.
#      Instead, Python can achieve overloading-like behavior using:
#         - default arguments
#         - *args
#         - **kwargs

# ==============================================================
#                     METHOD OVERRIDING
# ==============================================================
class Shape:
    def __init__(self, color, is_filled):
        self.color = color
        self.is_filled = is_filled

    def describe(self):
        print(
            f"It is {self.color} and "
            f"{'filled' if self.is_filled else 'not filled'}"
        )


class Circle(Shape):
    def __init__(self, color, is_filled, radius):
        super().__init__(color, is_filled)
        self.radius = radius

    # Method overriding
    def describe(self):
        print(f"It is a circle with area of "
              f"{3.14 * self.radius ** 2:.2f} cm².")

        # super() → access parent class functionality
        super().describe()


class Square(Shape):
    def __init__(self, color, is_filled, width):
        super().__init__(color, is_filled)
        self.width = width

    # Method overriding
    def describe(self):
        print(f"It is a square with area of "
              f"{self.width ** 2:.2f} cm².")

        super().describe()


class Triangle(Shape):
    def __init__(self, color, is_filled, width, height):
        super().__init__(color, is_filled)
        self.width = width
        self.height = height

    # Method overriding
    def describe(self):
        print(f"It is a triangle with area of "
              f"{(self.width * self.height) / 2:.2f} cm².")

        super().describe()


circle = Circle("Black", True, 5)
square = Square("Blue", False, 4)
triangle = Triangle("Green", True, 3.5, 6)


# Polymorphism
shapes = [circle, square, triangle]

for shape in shapes:
    shape.describe()
    print()



# ==============================================================
#                   OPERATOR OVERLOADING
# ==============================================================

# Operator overloading means defining how operators behave 
# with objects of your own class.

# Python uses special/dunder methods for operators.

class Money:
    def __init__(self, amount):
        self.amount = amount

    # Overload the + operator 
    def __add__(self, other):
        return Money(self.amount + other.amount)


money1 = Money(500)
money2 = Money(250)

# Normally, + is used with numbers:
# 500 + 250 → 750

# Here, we are using + with Money objects.
# Python calls:
# money1.__add__(money2)

total = money1 + money2

print(total.amount)    # 750

# ==============================================================
#                  OVERLOADING-LIKE BEHAVIOR
# ==============================================================

class Calculator:

    # *args allows any number of positional arguments
    def add(self, *numbers):
        return sum(numbers)


calculator = Calculator()

print(calculator.add(2, 3))        # 5
print(calculator.add(2, 3, 4))     # 9
print(calculator.add(1, 2, 3, 4))  # 10





# superscript in windows = Alt + 0178    
