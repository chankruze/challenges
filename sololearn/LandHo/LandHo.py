#!/usr/bin/python

position = int(input()) + 1

trip = position // 20
time = 10
    
if trip % 2 == 0:
    time += 20 * trip
else:
    time += 10 * trip
    
print(time)