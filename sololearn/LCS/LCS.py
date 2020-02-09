#!/usr/bin/python

def findstem(arr): 
    lcs = ""
    lcs_match = 0
    arr_len = len(arr)
    first_word = arr[0]
    len_first_word = len(first_word)

    # eleminating from end
    for i in range(len_first_word):
        # generate substrings
        sub = first_word[0:len_first_word - i]
        match = 0

        for _ in range(arr_len):
            if sub in arr[_]:
                match += 1
        
        if match > lcs_match:
            lcs_match = match
            lcs = sub
        
        if match == arr_len:
            return sub

    # eleminating from start
    for i in range(len_first_word):
        # generate substrings
        sub = first_word[i::]
        match = 0

        for _ in range(arr_len):
            if sub in arr[_]:
                match += 1
        
        if match > lcs_match:
            lcs_match = match
            lcs = sub

        if match == arr_len:
            return sub

    return lcs

words = str(input()).split()
print(findstem(words))

# SoloLearn Learning LearningIsFun Learnable
# ABACDAQ BACDAQA ACDAQAW XYZCDAQ
# funny funeral funfair