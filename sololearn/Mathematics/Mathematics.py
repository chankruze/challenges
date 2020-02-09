#!/usr/bin/python

ans = int(input())
expressions = str(input()).split()
matches = 0

for _ in range(0, len(expressions)):
    if eval(expressions[_]) == ans:
        matches += 1
        
    if matches != 0:
        print("index " + str(_))
        exit(0)
    
print("none")
