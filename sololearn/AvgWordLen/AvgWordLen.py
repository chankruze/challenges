#!/usr/bin/python

import math

in_str = str(input()).split()
total = 0
punctuations = '''!()-[]{};:'"\,<>./?@#$%^&*_~'''

for word in in_str:
    for char in word:
        if char not in punctuations:
            total += 1

avg = math.ceil(total / len(in_str))

print(avg)