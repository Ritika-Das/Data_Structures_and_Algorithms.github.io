def shell(numbers):
    """Shell sort algorithm."""

    inc = len(numbers) // 2

    while inc:
        for i, n in enumerate(numbers):
            while i >= inc and numbers[i - inc] > n:
                numbers[i] = numbers[i - inc]
                i -= inc
            numbers[i] = n
        inc = 1 if inc == 2 else int(inc * 5.0 / 11)

    return numbers


if __name__ == "__main__":
    from random import randint

    # Generate unsorted list with random numbers.
    numbers = [randint(0, 1000) for x in range(10)]

    print("Unsorted:", numbers)

    # Sort unsorted list by value.
    # Pass the variable without the slice notation to
    # sort the list by reference.
    result = shell(numbers[:])

    print("Sorted:", result)
