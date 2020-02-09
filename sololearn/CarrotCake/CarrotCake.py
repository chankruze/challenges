#!/usr/bin/python

carrots = int(input())
boxes = int(input())

rem = carrots % boxes

if rem >= 7:
    print("Cake Time")
else:
    print("I need to buy " + str(7 - rem) + " more")