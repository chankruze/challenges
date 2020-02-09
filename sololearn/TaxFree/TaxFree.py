#!/usr/bin/python

prices = str(input()).split(',')
total = 0.0

for price in prices:
    new_price = int(price)

    if new_price < 20:
        new_price += new_price * 0.07
    
    total += new_price

print(round(total, 2))
