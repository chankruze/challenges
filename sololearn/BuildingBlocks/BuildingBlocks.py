#!/usr/bin/python

b = int(input())
r = int(input())
g = int(input())
y = int(input())

left_over =  b % 15 + r % 15 + g % 15 + y % 15

print(left_over)
