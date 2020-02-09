#!/usr/bin/python

limit = int(input())
total = 0

for num in range(limit):
    if num % 3 == 0 or num % 5 == 0:
        total += num
    
print(total)
