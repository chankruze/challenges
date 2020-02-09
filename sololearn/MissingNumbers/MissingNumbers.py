#!/usr/bin/python

n = int(input())
missing = list()
prev_num = int(input())

for i in range(1, n):
    curr_num = int(input())

    for missed in range(prev_num + 1, curr_num + 1):
        if missed != curr_num:
            missing.append(missed)
    
    prev_num = curr_num

out = ""
for num in missing:
    out += " " + str(num)

print(out.strip())
