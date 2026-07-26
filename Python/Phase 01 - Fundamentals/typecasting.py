# Typecasting = the process of converting a variable from one datatype to another

age = 12
name = "Ali"
score = 2.2
is_playing = False

print("========== Before converting ==========")
print("---------------- Type ----------------")
print("Age: ",type(age))
print("Name: ",type(name))
print("Score: ",type(score))
print("is_playing: ",type(is_playing))
print("---------------- Value ----------------")
print("Age: ",age)
print("Name: ",name)
print("Score: ",score)
print("is_playing: ",is_playing)

# ======================== TYPECASTING ========================
#converting float and int to string
age = str(age)
score = str(score)
#converting string into boolean
name = bool(name)
#converting boolean to float
is_playing = float(is_playing)

print()
print("========== After converting ==========")
print("---------------- Type ----------------")
print("Age: ",type(age))
print("Name: ",type(name))
print("Score: ",type(score))
print("is_playing: ",type(is_playing))
print("---------------- Value ----------------")
print("Age: ",age)
print("Name: ",name)
print("Score: ",score)
print("is_playing: ",is_playing)
