# Magic methods (also called Dunder methods) are automatically called by many of
# Python's built-in operations.
# "Dunder" = double underscore


# ==============================================================
#                      COMMON MAGIC METHODS
# ==============================================================

# Syntax / Operation        Magic Method

# Creating object       →   __init__()       -> initialization
# print(obj)             →   __str__()        -> string representation
# obj1 + obj2            →   __add__()        -> addition
# obj1 - obj2            →   __sub__()        -> subtraction
# obj1 * obj2            →   __mul__()        -> multiplication
# obj1 == obj2           →   __eq__()         -> equality
# obj1 < obj2            →   __lt__()         -> less than
# obj1 > obj2            →   __gt__()         -> greater than
# len(obj)               →   __len__()        -> length
# obj[index]             →   __getitem__()    -> indexing
# item in obj            →   __contains__()   -> membership


class Student:

    def __init__(self, name, gpa):
        self.name = name
        self.gpa = gpa

    def __str__(self):
        return f"{self.name} - GPA: {self.gpa}"

    def __lt__(self, other):
        return self.gpa < other.gpa

    def __gt__(self, other):
        return self.gpa > other.gpa


student1 = Student("Ayousha", 3.7)
student2 = Student("Ali", 3.2)

print(student1)
print(student2)

print(student1 > student2)      # True
print(student1 < student2)      # False



class Course:

    def __init__(self, students):
        self.students = students

    def __len__(self):
        return len(self.students)

    def __getitem__(self, index):
        return self.students[index]

    def __contains__(self, student):
        return student in self.students


course = Course(["Ali", "Sara", "Ahmed"])

print(len(course))          # 3

print(course[0])            # Ali
print(course[1])            # Sara

print("Ali" in course)      # True
print("Ayousha" in course)  # False




"""
student1 > student2
        ↓
student1.__gt__(student2)


len(course)
        ↓
course.__len__()


course[0]
        ↓
course.__getitem__(0)


"Ali" in course
        ↓
course.__contains__("Ali")
"""