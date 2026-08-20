# Exception handling is used to handle runtime errors
# without crashing the entire program.


# try / except
try:
    number = int(input("Enter a number: "))
    print(10 / number)

except ZeroDivisionError:
    print("You can't divide by zero!")

except ValueError:
    print("Enter only numbers please!")

# except Exception catches most normal runtime exceptions.
except Exception:
    print("Something went wrong!")

# else executes ONLY when no exception occurs.    
else:
    print(f"You entered {number}")

# finally ALWAYS executes, whether an exception occurs or not.(Commonly used for cleanup operations)
finally:
    print("Program finished.")


# Note:
#   Avoid bare..
#   except:
#   because it can also catch exceptions such as KeyboardInterrupt and SystemExit.