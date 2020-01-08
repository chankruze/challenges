#!/usr/bin/python

# words array from input string
in_str = str(input()).split()
# init encoded pig latin string
pig_str = ""

# function to encode word to pig latin
def to_pig_latin(word):
    # init new word
    new_word = ""
    # generate letters array from word
    letters = list(word)
    # append first letter to end
    letters.append(letters[0])
    # remove first letter
    letters.pop(0)
    
    # update new word from letters list
    for letter in letters:
        new_word += letter

    # add -ay suffix
    new_word += "ay"
    return new_word

# main loop to encode all words in a string
for word in in_str:
    # generate string from words adding space b/w
    pig_str += " " + to_pig_latin(word)

# remove initial space & print encoded string
print(pig_str.strip())