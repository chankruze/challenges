#!/usr/bin/python

pots = list()
result = ""

for i in range(6):
    pots.append(int(input()))

for krispies in pots:
    if krispies % 3 != 0:
        if krispies % 2 == 0:
            result += " Crackle"
        else:
            result += " Snap"
    else:
        result += " Pop"

print(result.strip())