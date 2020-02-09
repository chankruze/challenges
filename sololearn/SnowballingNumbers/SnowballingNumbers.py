#!/usr/bin/python

n = int(input())
arr = list()

for i in range(n):
    arr.append(int(input()))

sum = arr[0]

for i in range(1, n):
    if arr[i] > sum:
        sum += arr[i]
    else:
        print("false")
        exit(0)

print("true")
