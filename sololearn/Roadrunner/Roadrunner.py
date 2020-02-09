#!/usr/bin/python

dist = int(input())
v_r = int(input())
v_c = int(input())

time_r = dist / v_r
time_c = 50 / v_c

if time_c > time_r:
    print("Meep Meep")
else:
    print("Yum")
