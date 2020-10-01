def FiboGenerator(n):
    if n < 1:
        return 0
    elif n == 1:
        return 1
    else:
        return FiboGenerator(n - 1) + FiboGenerator(n - 2)

def FiboSearch(arr, x):
    m = 0 
    while FiboGenerator(m) < len(arr):
        m = m + 1 
    offset = -1    
    while (FiboGenerator(m) > 1):
        i = min( offset + FiboGenerator(m - 2) , len(arr) - 1)
        if (x > arr[i]):
            m = m - 1
            offset = i
        elif (x < arr[i]):
            m = m - 2
        else:
            return i        
    if(FiboGenerator(m - 1) and arr[offset + 1] == x):
        return offset + 1
    return -1

arr = [52, 10, 30, 22, 44, 58, 98, 60, 73, 100, 129, 120] # Array of Numbers
x = 10 # Search Element
if(FiboSearch(arr, x) != -1):
    print('Number found at index: ', FiboSearch(arr, x))
else:
    print('Number is not present in the array.')