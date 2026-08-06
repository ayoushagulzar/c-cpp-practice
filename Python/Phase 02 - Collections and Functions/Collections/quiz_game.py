#      QUIZ GAME USINNG 2D COLLECTIONS

questions = (
    "1. What is the capital of Pakistan?",
    "2. Which language is primarily used for AI and Data Science?",
    "3. Which data structure is immutable in Python?",
    "4. Which organization develops Python?",
    "5. What does CPU stand for?"
)

options = (
    ["A. Karachi", "B. Islamabad", "C. Lahore", "D. Quetta"],
    ["A. Java", "B. C++", "C. Python", "D. HTML"],
    ["A. List", "B. Set", "C. Dictionary", "D. Tuple"],
    ["A. Microsoft", "B. Google", "C. Python Software Foundation", "D. Apple"],
    ["A. Central Processing Unit", "B. Computer Processing Unit",
     "C. Central Program Unit", "D. Computer Program Unit"]
)

answers = (
    "B",
    "C",
    "D",
    "C",
    "A"
)

guesses = []
score = 0
question_num = 0

for question in questions:
    print("------------------------------------------------------------------")
    print(question)
    print()
    for option in options[question_num]:
        print(option)

    guess = input("Enter (A,B,C,D):").upper()  
    guesses.append(guess)

    if guess == answers[question_num]:
        score+=1
        print("CORRECT ANSWER!")
    else:
        print("INCORRECT!")
        print(answers[question_num],"is the correct answer.")     
    question_num+=1

print("------------------------------------------")
print("                 RESULT                   ")
print("------------------------------------------")

print("Answers: " , end="")
for answer in answers:
    print(answer , end=" ")
print()

print("Guesses: " , end="")
for guess in guesses:
    print(guess , end=" ")
print()

score = int (score / len(questions) * 100)
print("Your score is:" , score , "%")





