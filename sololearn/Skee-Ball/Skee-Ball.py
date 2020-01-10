#!/usr/bin/python

score = int(input())
price = int(input())
tickets = score // 12

if tickets >= price:
    print("Buy it!")
else:
    print("Try again")