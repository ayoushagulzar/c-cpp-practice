# Membership operators (in and not in) check whether a value is present in an iterable.
# Works with lists, tuples, strings, sets, dictionaries (keys), and other iterables.


print("\nExample#01: ")
students = ["Ali" , "Ahmed" , "Hassan" , "Mustafa"]

student = input("Enter the name of student: ").capitalize()

if student not in students:
    print(f"{student} not found.")
else:
    print(f"{student} is in list.") 


print("\nExample#02: ")
grade = {
    "Alice": "A",
    "Bob": "B+",
    "Charlie": "A-",
    "David": "C",
    "Emma": "B",
    "Fatima": "A+",
    "Hassan": "B-",
    "Ayesha": "A"
}

std_name = input("Enter the name of student to search their grade: ").capitalize()

if std_name in grade:
    print(f"{std_name}'s grade: {grade[std_name]}") 
        
else:
    print(f"{std_name} not found.")       

print("\nExample#03: ")
email = "james123@gmailcom"

if "@" not in email or "." not in email:
    print("Invalid email.")
else:
    print("Valid email.")

