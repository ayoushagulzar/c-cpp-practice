print("\n========== Basic for Loop ==========")
print("\n========== range(start, stop) ==========")

print("\nPrint numbers from 1 to 5:")

for i in range(1, 6):
    print(i)

print("\n========== range(stop) ==========")

print("\nPrint numbers from 0 to 4:")

for i in range(5):
    print(i)


print("\n========== range(start, stop) ==========")

print("\nPrint numbers from 5 to 10:")

for i in range(5, 11):
    print(i)


print("\n========== range(start, stop, step) ==========")

print("\nPrint even numbers from 2 to 10:")

for i in range(2, 11, 2):
    print(i)

print("\nCount backwards from 10 to 1:")

for i in range(10, 0, -1):
    print(i)


print("\n========== Loop Through a String ==========")

name = "Python"

print("\nPrint each character:")

for ch in name:
    print(ch)


print("\n========== for-else ==========")

for i in range(1, 6):
    print(i)

else:
    print("Loop finished successfully!")

