class Car:
    # CONSTRUCTOR 
    def __init__ (self , model , year , color , for_sale): 
        #self = current object (same as "this" in java) 
        self.model = model
        self.year = year
        self.color = color
        self.for_sale = for_sale

    # Instance method (method that works with an object's data) must have self
    def drive(self):
        print(f"You drive {self.model}.")

    def stop(self):
        print("You stop a car.")            