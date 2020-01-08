num_in = int(input())
i, sum = 0, 0

while i < num_in:
    num = int(input())
    
    if num % 2 == 0:
        sum += num
        
    i += 1

print(sum)