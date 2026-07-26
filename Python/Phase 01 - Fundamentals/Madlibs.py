#Madlibs game --- a game where we create story by filling blanks with random words

name = input("Enter a name: ")
adjective = input("Enter an adjective: ")
place = input("Enter a place: ")
animal = input("Enter an animal: ")
verb = input("Enter a verb: ")
color = input("Enter a color: ")
food = input("Enter a food: ")
number = input("Enter a number: ")
emotion = input("Enter an emotion: ")
object = input("Enter an object: ")

print("========================= Midlibs Game Story =========================")

print(f"""
One sunny morning, {name} woke up feeling very {adjective}.
While walking through {place}, they suddenly saw a giant {animal}.
The {animal} looked at {name} and shouted, "Quick! We must {verb} before it's too late!"
Without asking any questions, they grabbed a {color} {object} and started running. 
After a few minutes, they found a magical table filled with {food}.
They happily ate {number} pieces before realizing the {animal} had disappeared!
"I can't believe this happened," said {name}, feeling very {emotion}.
From that day on, everyone in {place} remembered the legendary adventure 
of the {adjective} hero and the mysterious {animal}.
""")