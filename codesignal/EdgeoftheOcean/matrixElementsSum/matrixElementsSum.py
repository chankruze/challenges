def matrixElementsSum(matrix):
    len_m = len(matrix)
    sum = 0

    for col in range(len(matrix[0])):
        for row in range(len_m):
            price = matrix[row][col]
            if price == 0:
                break
            else:
                sum += price

    return sum
