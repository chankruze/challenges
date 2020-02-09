#!/usr/bin/python

nums = str(input()).split()
new_list = ""

for num in nums:
    if int(num) % 2 == 0:
        new_list += " " + num

print(new_list.strip())