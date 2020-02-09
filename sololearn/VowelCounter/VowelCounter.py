#!/usr/bin/python

str_in = str(input()).lower()
count = 0
vowels = "aeiou"

def is_vowel(char):
    if char in vowels:
        return True
    else:
        return False
        
for char in str_in:
    if is_vowel(char):
        count += 1

print(count)