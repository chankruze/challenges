#!/usr/bin/python

word = list(str(input()))
hit = 0

for char in word:
    index = word.index(char) + 1
    
    if index < len(word):
        if char in word[index:len(word)]:
            hit += 1

if hit != 0:
    print("false")
else:
    print("true")