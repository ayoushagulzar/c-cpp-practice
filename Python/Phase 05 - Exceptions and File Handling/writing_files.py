import json
import csv

# ========================= WRITING TO A .TXT FILE =========================

# "w" = write mode
# Creates the file if it doesn't exist.
# Overwrites existing content if the file already exists.

with open("data.txt", "w") as file:
    file.write("Hello, World!\n")
    file.write("Learning File Handling in python.")


# ========================= APPENDING TO A .TXT FILE =======================

# "a" = append mode
# Adds content to the end of the file.
# Existing content is not overwritten.

with open("data.txt", "a") as file:
    file.write("\nThis is an additional line.")

# ======================== WRITING TO A .JSON FILE ==============================
# JSON is commonly used to store structured data such as dictionaries and lists.

# dictionary
student = {
    "name": "Ayousha",
    "age": 19,
    "course": "Software Engineering"
}

# Convert Python data into JSON and write it to a file
with open("student.json", "w") as file:
    json.dump(student, file, indent=4) # indent=4 → Makes the JSON nicely formatted and readable

# ======================== WRITING TO A .CSV FILE ==============================
# CSV = Comma-Separated Values. It's commonly used for tables/spreadsheets.

students = [
    ["Name", "Age", "Course"],
    ["Ali", 20, "CS"],
    ["Sara", 19, "SE"],
    ["Ahmed", 21, "AI"]
]

# newline="" prevents blank lines between rows
with open("students.csv", "w", newline="") as file:
    writer = csv.writer(file)

    # Write all rows to the CSV file
    writer.writerows(students)

# ======================== Writing CSV using dictionaries ==============================

students = [
    {"Name": "Ali", "Age": 20, "Course": "CS"},
    {"Name": "Sara", "Age": 19, "Course": "SE"}
]

with open("students.csv", "w", newline="") as file:
    fieldnames = ["Name", "Age", "Course"]

    writer = csv.DictWriter(file, fieldnames=fieldnames)

    writer.writeheader()
    writer.writerows(students)        
