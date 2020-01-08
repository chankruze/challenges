#!/usr/bin/python

# cost is fixed 21,000,000
cost = 21
# sold quantities
sold_quantities = int(input())
# selling price/hovercrft
per_sell_price = 3

# the diff b/w manufacturing and sell
margin = (per_sell_price * sold_quantities) - cost

# check for profit, loss or neutral
if margin > 0:
    print("Profit")
elif margin < 0:
    print("Loss")
else:
    print("Broke Even")
