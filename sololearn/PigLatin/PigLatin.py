in_str = str(input()).split()
pig_str = ""

def to_pig_latin(word):
    new_word = ""
    letters = list(word)
    letters.append(letters[0])
    letters.pop(0)
    
    for letter in letters:
        new_word += letter
    
    new_word += "ay"
    return new_word

for word in in_str:
    pig_str += " " + to_pig_latin(word)
    
print(pig_str.strip())