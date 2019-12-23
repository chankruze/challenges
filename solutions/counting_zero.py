import math

# Find triling 0's in Factorial
def calcTrailingZeros(n): 
    count = 0
    i = 5
    while (n / i >= 1): 
        count += int(n / i) 
        i *= 5
    return int(count)

# Loop to calculate output for T inputs
for _ in range(eval(input())):
    x = eval(input())
    zeros_in_2n = calcTrailingZeros(2*x)
    zeros_in_n = calcTrailingZeros(x)
    print(zeros_in_2n - (2 * zeros_in_n))
