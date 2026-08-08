# if __name__ == "__main__": ensures that a block of code runs only 
# when the file is executed directly, not when it is imported.

# __name__ is a special built-in variable.
# __name__ == "__main__" is True when the file is run directly.
# It is False when the file is imported as a module.
# Used to prevent test or demo code from running when a module is imported.

# app.py

import _student

_student.add_student("Fatima")

