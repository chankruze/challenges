#!/usr/bin/python

in_str = str(input()).lower().split()

for i in range(1, len(in_str)):
    if in_str[i-1][-1] != in_str[i][0]:
        print("false")
        exit(0)

print("true")