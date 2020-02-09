#!/usr/bin/python

prices = {
    "Nachos" : 6.00,
    "Pizza" : 6.00,
    "Cheeseburger" : 10.00,
    "Water" : 4.00,
    "Coke" : 5.00 }

orders = str(input()).split()
price = 0

for item in orders:
    if item in prices:
        price += prices[item]
    else:
        price += prices["Coke"]

price += price * 0.07
print(price)
