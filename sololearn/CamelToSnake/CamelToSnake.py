#!/usr/bin/python

orig_str = str(input()).split()

def c2s(word):
    new_word = word[0].lower()

    if word not in word.lower():
        
        for i in range(1, len(word)):
            old_char = word[i]
            new_char = ""

            if old_char not in old_char.lower():
                new_char = "_" + old_char.lower()
            else:
                new_char = old_char

            new_word += new_char
    else:
        new_word = word

    return new_word


new_str = ""

for string in orig_str:
    new_str += c2s(string)

print(new_str)