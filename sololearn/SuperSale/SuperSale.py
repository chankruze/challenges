#!/usr/bin/python

import math

str_prices = str(input()).split(',')
total = 0
# init most costly as first num
most_costly = float(str_prices[0])

for _ in str_prices:
    price = float(_)
    total += price
    # update most expensive price
    if price > most_costly:
        most_costly = price

temp = total - most_costly
# total with 30% discount on all except most expensive
new_total = most_costly + temp - (temp * 0.3)

# totals with tax
total += total * 0.07
new_total += new_total * 0.07

# savings
print(math.floor(total - new_total))

# 100.25,80.99,40.00