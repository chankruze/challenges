#!/usr/bin/python

bin_num = bin(int(input()))
count = 0

for char in bin_num:
    if char == '1':
        count += 1

print(count)
