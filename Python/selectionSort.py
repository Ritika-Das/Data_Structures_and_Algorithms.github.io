arr = [64, 23, 112, 21, 11]

for i in range(len(arr)):

    min_idx = i
    for j in range(i+1, len(arr)):
        if arr[min_idx] > arr[j]:
            min_idx = j

    if min_idx != i:
        arr[i], arr[min_idx] = arr[min_idx], arr[i]


for i in range(len(arr)):
    print("%d" % arr[i]),
