# The os module allows Python to interact with the operating system.
import os

# Check whether a file exists
if os.path.exists("test.txt"):
    print("File exists")
else:
    print("File does not exist")

# Check whether the path is specifically a file
if os.path.isfile("test.txt"):
    print("It is a file")

# Check whether the path is specifically a directory/folder
if os.path.isdir("test.txt"):
    print("It is a directory")