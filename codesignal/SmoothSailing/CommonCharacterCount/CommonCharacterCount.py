import collections

def commonCharacterCount(s1, s2):
    counter = 0
    d1 = collections.defaultdict(int)
    d2 = collections.defaultdict(int)

    for char in s1:
        d1[char] += 1

    for char in s2:
        d2[char] += 1
        
    for char in set(s1):
        counter += min(d1[char], d2[char])

    return counter
