#!/usr/bin/python

dicts = {
    "Lettuce" : 5,
    "Carrot" : 4,
    "Mango" : 9,
    "Cheeseburger" : 0
}

snacks = str(input()).split()
points = 0

for snack in snacks:
    points += dicts[snack]

if points >= 10:
    print("Come on Down!")
else:
    print("Time to wait")
