# The match-case statement selects and executes a block of code based on the value of an expression.
# match-case = switch statement in Python (but "break" statement not required)

def is_weekend(day):
    match day:
        case "Saturday" | "Sunday":
            return True
        case "Monday" | "Tuesday" | "Wednesday" | "Thursday" | "Friday":
            return False
        case _ : #default
            return False

print(is_weekend("Sunday") )       