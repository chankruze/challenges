#!/usr/bin/python

# import regex
import re

# get password from input
password = str(input())

# prepare regex cases
regex_num = re.compile('[0123456789]')
regex_sp_char = re.compile('[!@#$%&*]')

# check all conditions
if len(password) >= 7 and len(regex_num.findall(password)) and len(regex_sp_char.findall(password)):
    print("Strong")
else:
    print("Weak")
