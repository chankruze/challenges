#!/usr/bin/python

cc_num = [int(i) for i in str(input())]
sum = 0

# length must be 16
if len(cc_num) != 16:
    print("not valid")
    exit(0)

# reverse the number
cc_num = cc_num[::-1]
# print(cc_num)

# multiply every second digit by 2
for i in range(1, 16, 2):
    cc_num[i] *= 2
#print(cc_num)

# subtract 9 from all numbers higher then 9
for i in range(16):
    if cc_num[i] > 9:
        cc_num[i] -= 9

    # add all the digits together
    sum += cc_num[i]

# mudulo 10 of the sum should be equal to 0
if sum % 10 == 0:
    print("valid")
else:
    print("not valid")

# 4091131560563988