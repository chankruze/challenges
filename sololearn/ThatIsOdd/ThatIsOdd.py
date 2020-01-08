#!/usr/bin/python

# no. of times to ask for input
num_in = int(input())
# init loop counter i & sum with 0 as value
i, sum = 0, 0

# loop to ask for input & sum calculation
while i < num_in:
    num = int(input())

    # if num is even add to sum
    if num % 2 == 0:
        sum += num

    # update loop counter    
    i += 1

# print the sum
print(sum)