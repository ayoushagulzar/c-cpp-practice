# Class variable → defined inside class, outside methods.
# Shared by all instances of the class.

class Student:
    university = "FAST NUCES" # can be directly accessed by class (class variable ≈ static variable)
    num_of_students = 0

    def __init__ (self , name , age):
        self.name = name
        self.age = age
        Student.num_of_students+=1

student1 = Student ("Ayousha" , 18)
student2 = Student ("Mehwish" , 19)  

print(f"Name : {student1.name} | Age : {student1.age} | University : {student1.university}")
print(f"Name : {student2.name} | Age : {student2.age} | University : {student2.university}")

print(f"\nNumber of students: {Student.num_of_students}")