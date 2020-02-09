#!/usr/bin/env python

import itertools

def word_generator(chars, len):
    for i in range(len, len + 1):
        for s in itertools.permutations(chars, len):
            yield ''.join(s)    

str_in = str(input())
words = set()

for word in word_generator(str_in, len(str_in)):
    words.add(word)

sorted_words = list(words)
sorted_words.sort()
print(sorted_words.index(str_in) + 1)
