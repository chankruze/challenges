#!/usr/bin/python

def Q(num):
    result, value = 0, 0
    arr = [1, 1]

    for i in range(2, num):
        arr.append(arr[i - arr[i - 1]] + arr[i - arr[i - 2]])

    return arr[num - 1]

print(Q(int(input())))
