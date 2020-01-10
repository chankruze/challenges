#!/usr/bin/python

encoded_str = str(input()).split()
decoded_str = ""

blacklist = '''1234567890!()-[]{};:'"\,<>./?@#$%^&*_~=+`'''

def decipher(word):
    stage1 = ""
    for char in word:
        if char not in blacklist:
            stage1 += char
    
    return stage1

for word in encoded_str:
    decoded_str += " " + decipher(word)

print(decoded_str.strip()[::-1])