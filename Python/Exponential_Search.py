num = int(input("Please enter size of array : "))
arr_str = list(input().split(" "))
if len(arr_str)!=num:
	print("Please enter only "+str(num)+" elements.")
	exit()
arr = list(map(int, arr_str))
val = int(input("Enter value to be found : "))

def binary_search(arr, l, r, val):
	if r >= l:
		mid = int((l + (r)) / 2)

		if arr[mid] == val:
			return mid
		if arr[mid] < val:
			binary_search(arr, mid+1, r, val)
		else:
			binary_search(arr, l, mid-1, val)
	return -1

def exponent(arr, n, val):
	if arr[0] == val:
		return 0

	i = 1	
	while i < n and arr[i] <= val :
		i *= 2

	index = binary_search(arr, i/2, min(i,n), val)
	return index

index = exponent(arr, len(arr), val)
print(str(val)+" is positioned at : "+str(index+1))