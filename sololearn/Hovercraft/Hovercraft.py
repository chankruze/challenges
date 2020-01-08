cost = 21
sold_quantities = int(input())
per_sell_price = 3

margin = (per_sell_price * sold_quantities) - cost

if margin > 0:
    print("Profit")
elif margin < 0:
    print("Loss")
else:
    print("Broke Even")