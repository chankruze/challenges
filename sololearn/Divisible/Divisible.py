#!/usr/bin/python

num = int(input())
tests = str(input()).split()
pass_count = 0

for test in tests:
    if num % int(test) == 0:
        pass_count += 1

if pass_count == len(tests):
    print("divisible by all")
else:
    print("not divisible by all")