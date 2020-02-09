#!/usr/bin/python

n = int(input())
init_arr = list()

for _ in range(n):
    name = str(input()).split()
    init = name[0][0] + name[-1][0]
    init_arr.append(init)

out = ""
for init in init_arr:
    out += " " + init

print(out.strip())
