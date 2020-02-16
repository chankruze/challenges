def adjacentElementsProduct(inputArray):
    products = list()

    for i in range(1, len(inputArray)):
        products.append(inputArray[i] * inputArray[i - 1])
    
    return max(products)
