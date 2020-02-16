def allLongestStrings(inputArray):
    max_len = 0
    out = list()
    
    for str in inputArray:
        len_str = len(str)

        if len_str > max_len:
            max_len = len_str

    for str in inputArray:
        if len(str) == max_len:
            out.append(str)
    
    return out