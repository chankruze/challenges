def isLucky(n):
    num = str(n)
    len_half = len(num) // 2
    f1, f2 = num[:len_half], num[len_half:]

    return sum(map(int, f1)) == sum(map(int, f2))