#!/usr/bin/python

price_pesos = int(input())
price_dollars = int(input())

if (price_pesos / 50) > price_dollars:
    print("Dollars")
else:
    print("Pesos")