#or , and , not


attendance = float(input("Enter attendance percentage: "))
assignment_submitted = input("Assignments submitted? (yes/no): ").lower()
fee_cleared = input("Fee cleared? (yes/no): ").lower()
disciplinary_action = input("Under disciplinary action? (yes/no): ").lower()

if attendance >= 75 and assignment_submitted == "yes":
    
    if fee_cleared == "yes" and not (disciplinary_action == "yes"):
        print("You are eligible to appear in the final examination.")
        print("Best of luck!")
        
    else:
        print("Exam permission denied.")
        print("Please clear your dues or contact the administration.")

else:
    print("You are not eligible for the final examination.")
    print("Attendance or assignment requirements not met.")