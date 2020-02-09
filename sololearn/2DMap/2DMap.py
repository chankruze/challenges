#!/usr/bin/python

space = str(input()).split(',')
ix, iy, jx, jy = -1, -1, -1, -1

for i in range(len(space)):
    if 'P' in space[i]:
        if ix == -1 and jx == -1:
            ix = iy = i
            jx = space[i].find('P')
            jy = space[i].rfind('P')
        else:
            iy = i
            jy = space[i].find('P')

print((iy - ix) + abs(jy - jx))

# XPXXX,PXXXX,XXXXX,XXXXX,XXXXX