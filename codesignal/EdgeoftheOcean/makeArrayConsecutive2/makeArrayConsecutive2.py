def makeArrayConsecutive2(statues):

    # (Total numbers between start & end) - (numbers present)
    # (max(statues) - min(statues) + 1) - len(statues)

    return max(statues) - min(statues) + 1 - len(statues)
