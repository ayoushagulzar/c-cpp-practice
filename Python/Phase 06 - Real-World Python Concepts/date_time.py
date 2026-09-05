import datetime

date = datetime.date(2007,8,12)
today = datetime.date.today()

print("Date of Birth: " , date)
print("Today's date: " , today)

time = datetime.time(12 , 10 , 5)
now = datetime.datetime.now() #this will show date + time

now = now.strftime("%H:%M:%S") #this will show js time (depend on us how we format)

print("time: " , time)
print("current time: " , now)