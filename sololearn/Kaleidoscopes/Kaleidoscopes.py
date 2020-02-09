#!/usr/bin/python

quantity = int(input())
price = 5.00 * quantity

#discount
if quantity > 1:
    price -= price * 0.1

# tax
price += price * 0.07
print(round(price, 2))