#!/usr/bin/python

def CMYKtoRGB(C, M, Y, K):
    R = round(255 * (1 - C) * (1 - K))
    G = round(255 * (1 - M) * (1 - K))
    B = round(255 * (1 - Y) * (1 - K))
    return str(R) + "," + str(G) + "," + str(B)

print(CMYKtoRGB(float(input()), float(input()), float(input()), float(input())))
