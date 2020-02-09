#!/usr/bin/python

prices = str(input()).split()

in_limit = 0

for price in prices:
    price_usd = float(price) * 1.1

    if price_usd > 20:
        in_limit += 1
    
if in_limit == 0:
    print("On to the terminal")
else:
    print("Back to the store")
