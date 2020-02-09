#!/usr/bin/python

buddies = str(input()).split()
my_name = str(input())

match = 0

for buddy in buddies:
    if buddy[0] == my_name[0]:
        match += 1

if match > 0:
    print("Compare notes")
else:
    print("No such luck")