# CMYK to RGB
The CMYK color model is the standard in the printing industry and refers to the primary colors of pigment: Cyan, Magenta, Yellow, and Black.

K stands for 'Key' since in 4-color printing the Cyan, Magenta and Yellow printing plates are carefully keyed or aligned with the key of the Black key plate.

RGB (Red, Green and Blue) is the color space for digital images.

A CMYK color can be converted to RGB using the following equations:
```
R = 255 × (1-C) × (1-K)
G = 255 × (1-M) × (1-K)
B = 255 × (1-Y) × (1-K)
```

## Task
Given a color in CMYK format, output the corresponding RGB color.
 
## Input Format
4 decimal numbers in the range of [0, 1], representing Cyan, Magenta, Yellow and Black.

## Output Format
A string, representing the corresponding RGB color, each component separated by commas.

## Sample Input
```
0.4
0.49
0.552
0.36
```

## Sample Output
```
98,83,73
```

## Solutions

Language | Solution
---------|---------
C | not available
CPP | not available
C# | not available
Python | [available](https://raw.githubusercontent.com/chankruze/challenges/master/sololearn/CMYKtoRGB/CMYKtoRGB.py)
Java | not available
Ruby | not available
Swift | not available

