#!/usr/bin/python

compressed = str(input())
pair_arr = list()
prev_char = compressed[0]
output = ""

for i in range(1, len(compressed)):
    if compressed[i].isdigit() == False:
        pair_arr.append(prev_char)
        prev_char = compressed[i]
    else:
        prev_char += compressed[i]

pair_arr.append(prev_char)

for pair in pair_arr:
    char = pair[0]
    times = int(pair[1:len(pair)])

    for j in range(times):
        output += char

print(output)
