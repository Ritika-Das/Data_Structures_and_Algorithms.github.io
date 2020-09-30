def quicksort(numbers, low, high):
    """Python implementation of quicksort."""

    if low < high:
        pivot = _partition(numbers, low, high)
        quicksort(numbers, low, pivot)
        quicksort(numbers, pivot + 1, high)

    return numbers


def _partition(numbers, low, high):
    pivot = numbers[low]
    left = low

    for i in range(low + 1, high):
        if numbers[i] < pivot:
            numbers[i], numbers[left] = numbers[left], numbers[i]
            left += 1

    pivot, numbers[left] = numbers[left], pivot
    return left


if __name__ == "__main__":
    import random

    # Generate list with random numbers.
    numbers = [random.randint(0, 1000) for x in range(100)]
    # The list can be passed by value or reference to the quicksort function.
    # If passed by value the original variables list will be unchanged.
    by_value = numbers[:]
    # If passed by reference the return value is unnecessary because the original
    # variable will be changed by reference.
    by_reference = numbers

    quicksort(by_reference, 0, len(numbers))

    # The numbers in the list will be sorted.
    print(numbers)
