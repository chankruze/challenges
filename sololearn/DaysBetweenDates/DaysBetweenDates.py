#!/usr/bin/python

from datetime import date

def unpack_date(date_in):
    # input case 1 (11/19/2019)
    if len(date_in) <= 10:
        date_in = date_in.split('/')
    # input case 2 (November 19, 2019)
    else:
        date_in = date_in.split()
        date_in[1] = date_in[1].split(',')[0]

    # day
    day = int(date_in[1])

    # month
    if len(date_in[0]) > 2:
        # months array
        months = ["NULL", "January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"]
        month = months.index(date_in[0])
    else:
        month = int(date_in[0])

    # year 
    year = int(date_in[2])

    return date(year, month, day)

date_one = str(input())
date_two = str(input())

delta = unpack_date(date_two) - unpack_date(date_one)

print(delta.days)
