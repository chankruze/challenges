import math

total_nums = int(input())
num_array = []

for i in range(total_nums):
    num_array.append(int(input()))
    
for n in num_array:
    print(math.factorial(n))
