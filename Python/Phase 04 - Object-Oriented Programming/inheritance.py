# single inheritance
class Animal:
    def __init__(self , name):
        self.name = name
        self.is_alive = True

    def eat(self):
        print(f"{self.name} is eating.") 
        
    def sleep(self):
        print(f"{self.name} is sleeping.")        

class Dog(Animal): #Dog(Animal) = Dog inherits from Animal
    def speak(self):
        print("WOOF!")

class Cat(Animal):
    def speak(self):
        print("MEOWW!")


class Mouse(Animal):
    def speak(self):
        print("SQUEEK!")


dog = Dog("Jacky")
cat = Animal("Mano")
mouse = Mouse("Mickey")

dog.speak() 
mouse.eat()
cat.sleep()