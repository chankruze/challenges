def first_bad_pair(sequence):
    """Return the first index of a pair of elements where the earlier
    element is not less than the later elements. If no such pair
    exists, return -1."""
    for i in range(len(sequence) - 1):
        if sequence[i] >= sequence[i + 1]:
            return i
    return -1


def almostIncreasingSequence(sequence):
    fbp = first_bad_pair(sequence)

    # List is increasing
    if fbp == -1:
        return True

    # Deleting earlier element makes increasing
    if first_bad_pair(sequence[fbp - 1:fbp] + sequence[fbp + 1:]) == -1:
        return True

    # Deleting later element makes increasing
    if first_bad_pair(sequence[fbp:fbp + 1] + sequence[fbp + 2:]) == -1:
        return True

    # Not possible
    return False
