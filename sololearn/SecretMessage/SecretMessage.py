#!/usr/bin/python

# to get letters from index
letters = 'abcdefghijklmnopqrstuvwxyz'

# input string -> lower -> split to get words array
normal_str = str(input()).lower().split()

# secret string
encoded_str = ""

# function to encode each word
def encode(word):
    encoded_word = ""
    for letter in word:
        index = letters.index(letter)
        encoded_word += letters[25 - index]
    return str(encoded_word)

for word in normal_str:
    # construct encoded string from encoded words adding spaces
    encoded_str += " " + encode(word)

# printing encoded string with start whitespace removed
print(encoded_str.strip())