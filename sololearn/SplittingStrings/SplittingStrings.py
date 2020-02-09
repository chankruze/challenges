#!/usr/bin/python

string = str(input())
size = int(input())

def split_to_chunks(string, x):
    size = len(string)
    for pos in range(0, size, x):
        yield string[pos:pos+x]

chunked_list = list(split_to_chunks(string, x = size))
output = ""

for chunk in chunked_list:
    if chunked_list.index(chunk) == 0:
        output += chunk
    else:
        output += "-" + chunk

print(output)