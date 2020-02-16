def sortByHeight(a):
    trees = [index for index, value in enumerate(a) if value == -1]

    new_list = sorted([i for i in a if i > 0])

    for tree in trees:
        new_list.insert(tree, -1)

    return new_list