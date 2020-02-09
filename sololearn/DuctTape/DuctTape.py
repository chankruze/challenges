#!/usr/bin/python

import math

h = int(input())
w = int(input())

area_door = 2 * (h * w)
area_tape = 60 * (1 / 6)

print(math.ceil(area_door / area_tape))
