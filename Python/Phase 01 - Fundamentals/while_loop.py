password = ""
print("======================== Basic While loop ==============================")
while password != "python123":
    password = input("Enter password: ")

print("Access Granted!")

#pass --> placeholder that does nothing (useful when writing code that will be completed later)
# age = 18
# while age >=18 and age <=60:
#     pass

#break and continue in while loop
print("============== While loop with contniue and else block ====================")
count = 1
while count<=50:
    if (count % 5 != 0):
        count+=1;
        continue

    print(count) 
    # count++   --> invalid .. python does not have increment/decrement
    count+=1

    # if count == 26:
    #     break
#in python loops can have else -- > executes when the while condition becomes False.
# else does NOT run if break is used
else:
    print("Loop finished successfully!")    
    