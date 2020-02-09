#!/usr/bin/python

palindrome_count = 0

for _ in range(0, 4):
    str_phrase = str(input())
    if str_phrase == str_phrase[::-1]:
        palindrome_count += 1

if palindrome_count != 0:
    print("Open")
else:
    print("Trash")
