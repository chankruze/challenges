#!/usr/bin/python

dimen_a = str(input()).split(',')
dimen_b = str(input()).split(',')

area_a = int(dimen_a[0]) * int(dimen_a[1])
area_b = int(dimen_b[0]) * int(dimen_b[1])

if area_a > area_b:
    print("Apartment A")
else:
    print("Apartment B")


# OR

# dimen_a = str(input()).split(',')
# dimen_b = str(input()).split(',')

# area_a = eval(dimen_a[0] + '*' + dimen_a[1])
# area_b = eval(dimen_b[0] + '*' + dimen_b[1])

# if area_a > area_b:
#     print("Apartment A")
# else:
#     print("Apartment B")
