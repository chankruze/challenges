#!/usr/bin/python

import math

num_colors = int(input())
cost, tax = 40.00, 0

if num_colors != 0:
    cost += num_colors * 5.00

cost += cost * 0.1

print(math.ceil(cost))