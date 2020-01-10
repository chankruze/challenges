#!/usr/bin/python

progress = int(input())

if progress > 10:
    print("High Five")
elif progress < 1:
    print("shh")
else:
    msg = ""
    for i in range(0, progress):
        msg += "Ra!"
    print(msg)
