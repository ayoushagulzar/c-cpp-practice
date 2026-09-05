# Multithreading allows a Python program to run multiple threads within the same process.
# It is especially useful when a program spends time waiting,
# such as for network responses, files, databases, or APIs.

import threading
import time

def complete_assignment(subject):
    time.sleep(5)
    print(f"You completed {subject} assignment.")

def get_mail():
    time.sleep(2)
    print("You got the mail.")

def clean_room():
    time.sleep(8)
    print("You cleaned the room.")

def submit_project():
    time.sleep(3)
    print("You submitted the project.")   


thread1 = threading.Thread(target=complete_assignment , args = ("COAL",))  
thread1.start()  

thread2 = threading.Thread(target=get_mail)  
thread2.start()

thread3 = threading.Thread(target=clean_room)  
thread3.start()

thread4 = threading.Thread(target=submit_project)  
thread4.start()

thread1.join()
thread2.join()
thread3.join()
thread4.join()

# after using join method , this line will be printed at the end (after completing all threads)
print("All threads completed!")