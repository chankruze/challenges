#!/usr/bin/python

try:
    from sympy.mpmath import mp
except ImportError:
    from mpmath import mp

# set number of digits
mp.dps = 1001

n = int(input())
print(list(str(mp.pi).split('.')[1])[n - 1])
