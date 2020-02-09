#!/usr/bin/python

items = str(input()).split(',')
jackpot = str(input())

time = 5 * (items.index(jackpot) + 1)

print(time)
