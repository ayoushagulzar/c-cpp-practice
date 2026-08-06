import random

# ==========================================================
# random module examples
# ==========================================================

numbers = [1, 2, 3, 4, 5, 6]
fruits = ["apple", "orange", "mango", "kiwi", "banana"]
cards = ["A", "K", "Q", "J", "10", "9"]

# ==========================================================
# randint(a, b)
# Returns a random integer between a and b (inclusive).
# ==========================================================

print("randint()")
print(random.randint(1, 10))


# ==========================================================
# random()
# Returns a random float between 0.0 and 1.0.
# ==========================================================

print("\nrandom()")
print(random.random())


# ==========================================================
# uniform(a, b)
# Returns a random float between a and b.
# ==========================================================

print("\nuniform()")
print(random.uniform(1, 10))


# ==========================================================
# choice(sequence)
# Returns one random element from a sequence.
# ==========================================================

print("\nchoice()")
print(random.choice(fruits))


# ==========================================================
# choices(sequence, k=n)
# Returns n random elements (duplicates allowed).
# ==========================================================

print("\nchoices()")
print(random.choices(fruits, k=3))


# ==========================================================
# sample(sequence, k=n)
# Returns n unique random elements.
# ==========================================================

print("\nsample()")
print(random.sample(fruits, k=3))


# ==========================================================
# shuffle(list)
# Randomly shuffles a list in place.
# ==========================================================

print("\nshuffle()")
print("Before:", cards)

random.shuffle(cards)

print("After :", cards)


# ==========================================================
# randrange(start, stop, step)
# Returns a random value from a range.
# ==========================================================

print("\nrandrange()")
print(random.randrange(0, 21, 2))