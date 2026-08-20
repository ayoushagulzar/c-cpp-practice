import json
import csv

# ========================= READING A .TXT FILE =========================

# "r" = read mode
# The file must already exist.

print("\n .txt file output.")
print("read entire data")
with open("data.txt", "r") as file:
    content = file.read()

print(content)

# ========================= read line by line ==========================
print("\nread line by line")
with open("data.txt", "r") as file:
    for line in file:
        print(line.strip())

# read() → reads the entire file
# readline() → reads one line
# readlines() → reads all lines and returns them as a list        

# ========================= READING A .JSON FILE =========================
# Open the JSON file in read mode
print("\n .json file output.")
with open("student.json", "r") as file:
    student = json.load(file)  #Reads JSON from a file and converts it into Python data.

print(student)

# ========================= READING A .CSV FILE =========================
print("\n .csv file output.")
with open("students.csv", "r", newline="") as file:
    reader = csv.reader(file)

    # Read each row
    for row in reader:
        print(row)

# ========================= READING CSV as DICTIONARIES =========================
print("\n .csv using dictionaries file output.")
with open("students.csv", "r", newline="") as file:
    reader = csv.DictReader(file)

    for row in reader:
        print(row["Name"])
        print(row["Age"])
        print(row["Course"])        
