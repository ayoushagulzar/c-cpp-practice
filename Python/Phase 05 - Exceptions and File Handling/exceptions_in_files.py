# "x" = create mode
# Creates a new file.
# Raises FileExistsError if the file already exists.

# WRITING
try:
    with open("new_file.txt", "x") as file:
        file.write("New file created!")

except FileExistsError:
    print("File already exists!")

# READING
try:
     with open("data.txt", "r") as file:
        content = file.read()
        print(content)

except FileNotFoundError:
     print("Error: The file does not exist.")